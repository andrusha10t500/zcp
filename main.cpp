#include <fstream>
#include <string>
#include <iostream>
#include "header.h"
using namespace std;
int main(int argc,char* args[])
{
    // Размер буфера 
    const int buf_size = 15638;
 
    // Имя исходного файла   
    std::string src_file = args[1];
    std::string out_file = args[2];
    cout << src_file << " -> " << out_file << "\n";
    
    // Создание потока для работы с исходным файлом
    std::ifstream ifs(src_file.c_str(), std::ios::binary);
 
    // Подсчет размер исходного файла
    ifs.seekg(0, std::ios::end);
    std::ios::pos_type src_size = ifs.tellg();
    ifs.seekg(0, std::ios::beg);
    
    // Количество целых проходов (для частей файлы, которые полностью умещаются в буфер)
    size_t a_mount = src_size / buf_size;
    // Остаток (остаток файла)
    size_t b_mount = src_size % buf_size;
 
    
    // Создание потока для файла-копии
    std::ofstream ofs(out_file.c_str(), std::ios::binary);
    
    // Это буфер
    char buf[buf_size];
 
    // Цикл по числу полных проходов
    for(size_t i = 0; i < a_mount; ++i)
    {
        ifs.read(buf, buf_size);
        ofs.write(buf, buf_size);
        //cout << ofs.tellp() << "\n";
        printProgress(src_size,ofs.tellp());
    }
    
    // Если есть остаток
    if(b_mount != 0)
    {
        ifs.read(buf, b_mount);
        ofs.write(buf, b_mount);
    }
 
    ifs.close();
    ofs.close();
 
    return 0;
}