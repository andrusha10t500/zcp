<h1 style="text-align: center">zcp</h1>
zcp - Zhora Copy Paste
Мечтал о консольной программе, которая показывает проценты, или шкалу прогресса копирования, максимум что может стандартный cp - это показать какой файл куда скидывается: /home/user/file1.txt -> /home/user/document/file1.txt - меня такое не устроило, аналогов не нашёл, проще и интересней самому написать.

Для того что бы пользоваться программой, надо:

$ git clone https://github.com/andrusha10t500/zcp.git <br />
$ cd zcp <br />
$ make <br />
$ sudo cp zcp /usr/bin/zcp <br />

<h3>пример использования:</h3>
$ zcp '/home/user/video/Трансформеры Месть падших.2009.UHD.Blu-Ray.Remux.2160p.mkv' '/home/media/user/HDD/Трансформеры Месть падших.2009.UHD.Blu-Ray.Remux.2160p.mkv' <br />
'/home/user/video/Трансформеры Месть падших.2009.UHD.Blu-Ray.Remux.2160p.mkv' -> '/home/media/user/HDD/Трансформеры Месть падших.2009.UHD.Blu-Ray.Remux.2160p.mkv' <br />
              0.16%
