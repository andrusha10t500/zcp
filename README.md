<h1><p style="text-align: center">zcp</p></h1>
zcp - Zhora Copy Paste <br />
Мечтал о консольной программе, которая показывает проценты, или шкалу прогресса копирования, максимум что может стандартный cp - это показать какой файл куда скидывается: /home/user/file1.txt -> /home/user/document/file1.txt - меня такое не устроило, аналогов не нашёл, проще и интересней самому написать.

<h3>Для того, что бы пользоваться программой, надо:</h3>

$ git clone https://github.com/andrusha10t500/zcp.git <br />
$ cd zcp <br />
$ make <br />
$ sudo cp zcp /usr/bin/zcp <br />

<h3>пример использования:</h3>
$ zcp '/home/user/video/Трансформеры Месть падших.2009.UHD.Blu-Ray.Remux.2160p.mkv' '/home/media/user/HDD/Трансформеры Месть падших.2009.UHD.Blu-Ray.Remux.2160p.mkv' <br /> <br />
'/home/user/video/Трансформеры Месть падших.2009.UHD.Blu-Ray.Remux.2160p.mkv' -> '/home/media/user/HDD/Трансформеры Месть падших.2009.UHD.Blu-Ray.Remux.2160p.mkv' <br /><br />
              0.16%
<img src="https://raw.githubusercontent.com/andrusha10t500/zcp/master/image.png">
<ins>не копирует директории!</ins>
