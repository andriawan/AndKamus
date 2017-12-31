# AndKamus: CLI-based Dictionary [ID - ENG, ENG - ID]

Bismillah

Aplikasi ini adalah aplikasi kamus berbasis CLI dikembangkan dengan C++. Kata AndKamus diambil dari kata Andriawan Kamus :D. Dari saya untuk kalian para developer yang memegang teguh semangat Open Source. Cukup ketikan kata baik dari bahasa indonesia maupun bahasa inggris, hasil akan dimunculkan pada konsol CLI.

gif

## Mengapa Saya Mengembangkan Aplikasi ini?

Diakhir tahun 2017, karena kondisi kurang memungkinkan, saya mencoba mencari ketenangan dengan membuat aplikasi. Lari dari masalah dengan membuat Apps :D. Karena saya suka dengan CLI :D, Akses cepat tanpa basa basi, saya memutuskan membangun Aplikasi berbasis CLI. Beberapa user di github memiliki ide dan konsep yang sama. Kamus berbasis CLI. Namun, setelah saya observasi, Aplikasi tersebut belum memenuhi kebutuhan saya. Karena saya lebih mengutamakan kesederhanaan dan kehandalan, Akhirnya saya memutuskan menulis kode AndKamus ini dengan bahasa C++. Sejauh ini aplikasi ini dikembangkan di GNU Linux OS dengan fitur yang masih sederhana dan berstatus beta

## Requirement

  * g++ compiler
  * make build tool
  * Pengetahuan dasar build tool make

## Getting Started

Untuk compile aplikasi ini, anda harus berada di folder root AndKamus. Pastikan file Makefile ada. lalu ketikan perintah pada console "make compile". Anda bebas mengatur ulang konfigurasi make filenya.


## Installation

Untuk instalasi ke sistem, anda cukup ketikan pada console "make install" (anda harus berada di folder root AndKamus dan g++ sudah terinstall)

## Documentation

Belum tersedia. Jika anda berminat, silahkan pull request

## File & Folder Structure

  * assets - berisi file gambar, gif dan database kata dengan format csv
  * build - hasil dari kompilasi .cpp atau .h dalam bentuk binary code
  * src - berisi semua file .cpp dan .h
  * lib - berisi eksternal lib yang dibutuhkan aplikasi
  * Makefile - resep build tool aplikasi
  * README.md - informasi aplikasi dan panduan


## Screenshoot

## Help
![login](https://github.com/andriawan/AndKasir/blob/development/screenshot/login.png "Help menu")

## Version
![admin](https://github.com/andriawan/AndKasir/blob/development/screenshot/panel-admin.png "Version")

## Lisensi

Aplikasi ini belum memiliki lisensi (silahkan ajukan bagi anda yang paham tentang lisensi). Namun, kedepan, saya akan pelajari dan terapkan. Aplikasi ini menggunakan library dari user ben-strasser <https://github.com/ben-strasser/fast-cpp-csv-parser.git>dan basis csv file dari project http://gkamus.sourceforge.net dengan perombakan ulang struktur file dengan lisensi public domain.

## Kontribusi

Aplikasi ini masih berada pada status beta dimana butuh improvement lebih. Bagi anda yang berminat berkontribusi, silahkan pull request. Info detail silahkan kirim email ke andriawan2014@gmail.com atau telegram @irwan_andriawan. See you on next development :)

## Kontributor

Muhammad Irwan Andriawan <andriawan2014@gmail.com>