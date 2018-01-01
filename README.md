# AndKamus: CLI-based Dictionary [ID - ENG, ENG - ID]

Bismillah

Aplikasi ini adalah aplikasi kamus berbasis CLI dikembangkan dengan C++. Kata __AndKamus__ diambil dari kata Andriawan Kamus :D. Dari saya untuk kalian para developer yang memegang teguh semangat Open Source. Cukup ketikan kata baik dari bahasa indonesia maupun bahasa inggris, hasil akan dimunculkan pada konsol CLI.

![demo](https://github.com/andriawan/AndKamus/blob/master/assets/demo.gif)

## Mengapa Saya Mengembangkan Aplikasi ini?

Diakhir tahun 2017, karena kondisi kurang memungkinkan, saya mencoba mencari ketenangan dengan membuat aplikasi. Lari dari masalah dengan membuat Apps :D. Karena saya fans of CLI :D, Akses cepat tanpa basa basi, saya memutuskan membangun Aplikasi berbasis CLI. Beberapa user di github memiliki ide dan konsep yang sama. Kamus berbasis CLI. Namun, setelah saya lakukan observasi, Aplikasi tersebut belum memenuhi kebutuhan saya. Karena saya lebih mengutamakan kesederhanaan dan kehandalan, Akhirnya saya memutuskan menulis kode AndKamus ini dengan bahasa C++. Sejauh ini aplikasi __AndKamus__ dikembangkan di GNU/Linux OS (Tidak menutup kemungkinan kedepan akan dikembangkan juga pada Windows OS) dengan fitur yang sederhana. Seperti yang saya katakan. Sederhana dan handal.

## Requirement

  * g++ compiler
  * make build tool
  * Pengetahuan dasar build tool make

## Getting Started

Untuk compile aplikasi __AndKamus__, anda harus berada di folder root __AndKamus__. Pastikan file Makefile ada. lalu ketikan perintah pada console "make compile". Anda bebas mengatur ulang konfigurasi make filenya. Untuk instalasi ke sistem, anda cukup ketikan pada console "make install" (anda harus berada di folder root AndKamus dan g++ sudah terinstall).

![install](https://github.com/andriawan/AndKamus/blob/master/assets/install.gif)

## Documentation

Belum tersedia. Jika anda berminat, silahkan pull request.

## File & Folder Structure

  * __assets__ - berisi file gambar, gif dan database kata dengan format csv
  * __build__ - hasil dari kompilasi .cpp atau .h dalam bentuk binary code
  * __src__ - berisi semua file .cpp dan .h
  * __lib__ - berisi eksternal lib yang dibutuhkan aplikasi
  * __Makefile__ - resep build tool aplikasi
  * __README.md__ - informasi aplikasi dan panduan


## Screenshoot

### Help

![menu](https://github.com/andriawan/AndKamus/blob/master/assets/help.png "Help menu")

### Version

![version](https://github.com/andriawan/AndKamus/blob/master/assets/version.png "Version")

## Lisensi

Aplikasi ini belum memiliki lisensi (silahkan ajukan bagi anda yang paham tentang lisensi). Namun, kedepan, saya akan pelajari Lisensi yang ada dan terapkan. Aplikasi ini menggunakan library dari user github [ben-strasser](https://github.com/ben-strasser/fast-cpp-csv-parser.git) dan basis csv file dari project [gkamus](http://gkamus.sourceforge.net) dengan perombakan ulang struktur file. file csv ini berada pada naungan lisensi public domain.

## Kontribusi dan Saran

Aplikasi ini masih berada pada status beta dimana butuh improvement lebih. Bagi anda yang berminat berkontribusi atau memberikan saran, silahkan pull request. Info detail silahkan buat issue atau kirim email ke andriawan2014@gmail.com atau telegram @irwan_andriawan. See you on next development :).

## Kontributor

Muhammad Irwan Andriawan <andriawan2014@gmail.com>
