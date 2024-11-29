# Weakly Report Algoritma

**Nama**: Aulia Safitri  
**NIM**: 24343002

## **Modul** 1 - Algoritma, Pemrograman, IDE  

---
### LATIHAN 1.Apa itu algoritma, pemrograman, program, programmer, dan IDE?

### 1. Algoritma
Algoritma adalah langkah-langkah atau prosedur sistematis untuk menyelesaikan suatu masalah. Dalam pemrograman, algoritma merupakan inti dari setiap solusi yang kita buat untuk mengatasi suatu tantangan.

#### Contoh Algoritma:
Misalkan kita ingin mengurutkan angka dari yang terkecil ke yang terbesar. Berikut adalah algoritma sederhana untuk tugas tersebut:

1. Bandingkan dua angka berturut-turut.
2. Jika angka pertama lebih besar dari angka kedua, tukar posisi kedua angka.
3. Ulangi proses ini sampai seluruh angka terurut.

---

### 2. Pemrograman
Pemrograman adalah proses menulis, menguji, dan memelihara kode untuk membuat program. Pemrograman memungkinkan kita untuk menginstruksikan komputer bagaimana cara bekerja dan melakukan tugas tertentu.

Pemrograman dapat dilakukan dalam berbagai bahasa, seperti **Python**, **Java**, **C++**, atau **JavaScript**

### 3. Program
Program adalah kumpulan instruksi atau kode yang ditulis dalam bahasa pemrograman dan dapat dieksekusi oleh komputer. Program mengatur bagaimana komputer harus berperilaku dan menyelesaikan tugas sesuai dengan instruksi yang diberikan.

Aplikasi Program: Berikan contoh-contoh aplikasi program dalam kehidupan sehari-hari (misalnya, aplikasi perbankan, game, sistem operasi) untuk memberikan konteks yang lebih luas.
Siklus Hidup Program: Jelaskan secara singkat tahapan-tahapan dalam pengembangan program (analisis, desain, pengkodean, pengujian, pemeliharaan).

### 4. Programmer
Programmer adalah orang yang menulis, mengembangkan, dan memelihara program komputer. Untuk menjadi programmer yang efektif, seseorang harus menguasai bahasa pemrograman serta algoritma untuk memecahkan masalah secara efisien dan mengembangkan solusi perangkat lunak.

Peran Programmer: Jelaskan berbagai peran programmer (front-end, back-end, full-stack, data scientist) dan skill yang dibutuhkan untuk masing-masing peran.
Soft Skills: Selain kemampuan teknis, tekankan pentingnya soft skills seperti komunikasi, kerja sama tim, dan problem-solving bagi seorang programmer.

### 5.IDE
IDE adalah perangkat lunak yang menyediakan lingkungan pengembangan yang lengkap untuk menulis dan mengelola kode. IDE biasanya dilengkapi dengan berbagai alat, seperti editor kode, debugger, dan compiler, yang memudahkan programmer dalam menulis, menguji, dan memelihara kode dengan cara yang lebih efisien.

Fitur Utama IDE: Jelaskan fitur-fitur penting IDE selain yang sudah disebutkan (auto-completion, refactoring, debugging) dan bagaimana fitur-fitur ini meningkatkan produktivitas programmer.
Contoh IDE: Berikan beberapa contoh IDE yang populer untuk bahasa pemrograman yang berbeda (misalnya, Visual Studio Code, PyCharm, Eclipse).

### LATIHAN 2.Lakukan instalasi IDE (pilih salah satu):
➢ DevC++
➢ Visual Studio Code
➢ CodeBlocks

Langkah-langkah Instalasi Visual Studio Code di Windows:
Unduh Visual Studio Code:

Kunjungi situs resmi Visual Studio Code di https://code.visualstudio.com/.
Klik tombol Download for Windows untuk mengunduh installer.
Jalankan Installer:

Setelah unduhan selesai, buka file VSCodeSetup-x64-<version>.exe yang telah diunduh.
Klik Run untuk memulai proses instalasi.
Pilih Pengaturan Instalasi:

Pilih pengaturan yang sesuai pada setiap layar yang muncul, biasanya Anda dapat memilih pengaturan default:
Accept the agreement → Pilih I accept the agreement.
Tentukan folder instalasi (default sudah sesuai).
Pilih untuk membuat shortcut di desktop jika diinginkan.
Pilih untuk menambahkan VS Code ke PATH (direkomendasikan untuk kealui terminal).
Mulai Instalasi:

Klik Install untuk memulai proses instalasi.
Tunggu beberapa menit sampai proses instalasi selesai.
Selesai:

Setelah instalasi selesai, klik Finish dan Visual Studio Code akan terbuka secara otomatis.
Anda juga bisa menjalankan VS Code kapan saja dari shortcut di desktop atau melalui Start Menu.

### LATIHAN 3

### Penjelasan Program "Hello World!" dalam Bahasa C
Program ini adalah contoh sederhana untuk menampilkan pesan "Hello World!" ke layar menggunakan bahasa pemrograman C.

1. *#include <stdio.h>*
   
#include adalah sebuah preprocessor directive yang memberi tahu kompiler untuk menyertakan file header eksternal ke dalam program.

<stdio.h> adalah file header standar dalam bahasa C yang menyediakan deklarasi untuk fungsi-fungsi input dan output dasar, seperti printf, scanf, dan lainnya.

Dengan menyertakan <stdio.h>, program dapat menggunakan fungsi printf untuk menampilkan output ke layar.


2. *int main()*
   
int menunjukkan bahwa fungsi main akan mengembalikan sebuah nilai bertipe data int (integer), yang umumnya digunakan untuk memberi informasi status eksekusi program kembali ke sistem operasi.

main() adalah fungsi utama (entry point) dari sebuah program C. Saat program dijalankan, eksekusi dimulai dari fungsi main.

Dalam program C, setiap program harus memiliki satu fungsi main() sebagai titik awal eksekusi. Program akan berakhir setelah mencapai return 0; di akhir fungsi main.

3. *{ } (Blok kode)*
 
{ dan } adalah tanda kurung kurawal yang digunakan untuk membungkus blok kode.

Dalam bahasa C, setiap pernyataan yang berada di dalam blok ini akan dijalankan secara berurutan saat fungsi main() dipanggil.

Semua pernyataan di dalam blok { } ini adalah bagian dari fungsi main().

4. *printf("Hello World!");*
   
printf adalah fungsi yang digunakan untuk menampilkan output ke layar. Fungsi ini berasal dari file header stdio.h.

"Hello World!" adalah string literal yang ingin dicetak ke layar. String ini berada di dalam tanda kutip ganda (""), yang menandakan bahwa itu adalah sebuah teks.

Dengan perintah ini, program akan menampilkan pesan "Hello World!" di layar saat dijalankan.

5. *return 0;*
   
return digunakan untuk mengembalikan nilai dari sebuah fungsi.

Dalam hal ini, nilai yang dikembalikan adalah 0, yang menunjukkan bahwa program telah berhasil dieksekusi tanpa kesalahan.

Ketika return 0; dijalankan, program mengakhiri eksekusinya dan memberi tahu sistem operasi bahwa program selesai dengan sukses.

## **Modul** 2 - Pemrograman Dasar C

### LATIHAN 1
### Program: Menampilkan Pesan Selamat Datang dengan Nama Pengguna
Program ini meminta pengguna untuk memasukkan nama lengkap mereka dan kemudian menampilkan pesan selamat datang yang berisi nama tersebut.

 ### 1. #include <stdio.h>
   
#include adalah direktif preprocessor yang digunakan untuk menyertakan file header eksternal dalam program.

<stdio.h> adalah file header standar yang berisi deklarasi untuk fungsi-fungsi input dan output, seperti printf dan fgets yang digunakan untuk menampilkan output dan membaca input dari pengguna.

 ### 2. Deklarasi Fungsi main()

*int main()*

int menunjukkan bahwa fungsi main() akan mengembalikan sebuah nilai bertipe integer.

main() adalah fungsi utama dalam program C yang menjadi titik awal eksekusi. Program dimulai dan diakhiri dalam fungsi ini.

Fungsi main() mengembalikan nilai 0 untuk menunjukkan bahwa program berhasil dieksekusi dengan sukses.

 ### 4. Deklarasi Variabel nama

*char nama[100];*
*char nama[100];*
mendeklarasikan sebuah array bertipe char (karakter) yang diberi nama nama.

Ukuran array adalah 100, yang memungkinkan program untuk menyimpan hingga 99 karakter dari nama pengguna (ditambah satu karakter untuk penanda akhir string '\0').

###  5. Menampilkan Pesan ke Pengguna

printf("Hello, siapa nama lengkapmu? ");

Fungsi printf digunakan untuk menampilkan pesan "Hello, siapa nama lengkapmu?" di layar, meminta pengguna untuk memasukkan nama lengkap mereka.

### 6. Membaca Input Pengguna

*fgets(nama, sizeof(nama), stdin);*

fgets digunakan untuk membaca input dari pengguna.

Parameter pertama (nama) adalah array tempat menyimpan input pengguna.

Parameter kedua (sizeof(nama)) memastikan bahwa fgets hanya membaca hingga 99 karakter (ukuran array dikurangi satu untuk karakter penutup string).

Parameter ketiga (stdin) menunjukkan bahwa input berasal dari keyboard (standar input).

### 7. Menampilkan Pesan Selamat Datang

printf("Selamat Datang %s dalam Pemrograman C!\n", nama);

Fungsi printf lagi digunakan untuk menampilkan pesan selamat datang yang mencakup nama pengguna.

%s adalah format spesifier yang digunakan untuk menggantikan nama dengan string yang telah dimasukkan oleh pengguna.

### 8.  Mengakhiri Program

*return 0;*

return 0; mengakhiri fungsi main() dan memberi tahu sistem operasi bahwa program selesai dengan status berhasil (nilai 0 menunjukkan eksekusi yang sukses).

### LATIHAN 2

### Program: Menghitung Nilai Akhir Mahasiswa

Program ini meminta input dari pengguna terkait identitas mahasiswa (nama, NIM, program studi, fakultas) serta nilai pratikum, UTS, dan UAS. Kemudian, program menghitung nilai akhir mahasiswa berdasarkan bobot tertentu dan menampilkan data yang telah dimasukkan.

*#include <stdio.h>*

Direktif ini digunakan untuk menyertakan file header stdio.h, yang berisi deklarasi fungsi untuk input dan output standar, seperti printf untuk menampilkan informasi dan scanf untuk mengambil input dari pengguna.

*int main (){*
    *char nama[100], nim[50], programstudi[45], fakultas[23];*
    *float pratikum, UTS, UAS, nilaiakhir;*
    
int main(): Fungsi utama yang menjadi titik awal eksekusi program.

### Deklarasi variabel:

char nama[100]: Array karakter untuk menyimpan nama mahasiswa (maksimal 99 karakter).

char nim[50]: Array karakter untuk menyimpan NIM mahasiswa (maksimal 49 karakter).

char programstudi[45]: Array karakter untuk menyimpan nama program studi mahasiswa (maksimal 44 karakter).

char fakultas[23]: Array karakter untuk menyimpan nama fakultas mahasiswa (maksimal 22 karakter).

float pratikum, UTS, UAS, nilaiakhir: Variabel bertipe float untuk menyimpan nilai pratikum, UTS, UAS, dan nilai akhir mahasiswa.

### Mengambil Input dari Pengguna

    printf("masukkan nama anda:");
    scanf("%s", &nama);

    printf("masukkan nim anda:");
    scanf("%s", &nim);

    printf("masukkan nama program studi anda:");
    scanf("%s", &programstudi);

    printf("masukkan nama fakultas anda:");
    scanf("%s", &fakultas);

    printf("masukkan nilai pratikum:");
    scanf("%f", &pratikum);

    printf("masukkan nilai uts:");
    scanf("%f", &UTS);

    printf("masukkan nilai UAS:");
    scanf("%f", &UAS);
    
printf digunakan untuk menampilkan pesan kepada pengguna agar mereka tahu apa yang harus diinputkan.

scanf digunakan untuk mengambil input dari pengguna. Input yang diambil meliputi:

Nama (%s untuk string).

NIM (%s untuk string).

Program studi (%s untuk string).

Fakultas (%s untuk string).

Nilai pratikum, UTS, dan UAS (%f untuk angka desimal).

Catatan: Anda menggunakan &nama, &nim, dll., yang tidak perlu karena nama sudah merupakan pointer (alamat memori) saat digunakan dengan scanf. Jadi, cukup gunakan nama tanpa &.

### Menghitung Nilai Akhir

    nilaiakhir = (0.3*pratikum) + (0.3*UTS) + (0.4*UAS);
Nilai akhir dihitung berdasarkan bobot yang diberikan:
30% dari nilai pratikum
30% dari nilai UTS
40% dari nilai UAS
Hasil perhitungan nilai akhir disimpan dalam variabel nilaiakhir.

 printf("NAMA:%s\n", nama);
 
    printf("NIM:%S\n", nim);
    
    printf("PROGRAM STUDI:%s\n", programstudi);
    
    printf("FAKULTAS:%s\n", fakultas);
    
    printf("PRATIKUM:%.2f\n", pratikum);
    
    printf("UTS:%.2f\n", UTS);
    
    printf("UAS:%.2f\n", UAS);
    
printf digunakan untuk menampilkan data yang telah dimasukkan oleh pengguna.

%s digunakan untuk menampilkan string (nama, NIM, program studi, fakultas).

%.2f digunakan untuk menampilkan angka dengan format desimal 2 angka setelah titik desimal (digunakan untuk nilai pratikum, UTS, dan UAS).

### LATIHAN 3

Program yang diberikan adalah program C yang menghitung luas segitiga berdasarkan nilai alas dan tinggi yang telah diberikan. Berikut adalah penjelasan langkah demi langkah tentang program ini:

### 1. Inisialisasi Variabel
Program dimulai dengan mendeklarasikan beberapa variabel:

float alas = 8.0, tinggi = 5.0, luas;

alas dan tinggi dideklarasikan dengan tipe data float (bilangan desimal) dan diberikan nilai awal 8.0 untuk alas dan 5.0 untuk tinggi.

Variabel luas juga dideklarasikan dengan tipe data float, yang akan digunakan untuk menyimpan hasil perhitungan luas segitiga.

### 2. Menghitung Luas Segitiga
Setelah variabel diinisialisasi, program melanjutkan ke perhitungan luas segitiga:

luas = 0.5 * alas * tinggi;
​
 ×alas×tinggi
 
Luas=0.5×8.0×5.0=20.0

Nilai 20.0 akan disimpan dalam variabel luas.

### 3. Mencetak Hasil Perhitungan
Setelah menghitung luas, program akan mencetak hasilnya ke layar dengan menggunakan fungsi printf:

printf("Luas segitiga dengan alas %.2f cm dan tinggi %.2f cm adalah %.2f cm^2\n", alas, tinggi, luas);

Penjelasan format string di dalam printf:

%.2f digunakan untuk mencetak angka dengan dua angka di belakang koma.

alas, tinggi, dan luas akan digantikan oleh nilai yang sesuai dalam format string tersebut.

Program akan mencetak kalimat yang memberikan informasi mengenai alas, tinggi, dan luas segitiga:

Luas segitiga dengan alas 8.00 cm dan tinggi 5.00 cm adalah 20.00 cm^2

### 4. Akhir Program
Program berakhir dengan perintah return 0; yang menandakan bahwa program telah selesai dieksekusi dengan sukses.

### LATIHAN 4

Program yang diberikan adalah program dalam bahasa C yang menghitung luas persegi panjang. Berikut adalah penjelasan langkah demi langkah dari program tersebut:

### 1. Inisialisasi Variabel
Program dimulai dengan mendeklarasikan dan menginisialisasi beberapa variabel:

float panjang = 10.0, lebar = 5.0, luas;

panjang dideklarasikan sebagai variabel bertipe float dengan nilai 10.0 cm.

lebar juga dideklarasikan sebagai float dengan nilai 5.0 cm.

luas adalah variabel bertipe float yang akan digunakan untuk menyimpan hasil perhitungan luas persegi panjang.

### 2. Menghitung Luas Persegi Panjang
Setelah variabel-variabel tersebut diinisialisasi, program melanjutkan untuk menghitung luas persegi panjang:

luas = panjang * lebar;

Rumus untuk menghitung luas persegi panjang adalah:

Luas
=
panjang
×
lebar
Luas=panjang×lebar

Dengan nilai yang diberikan, yaitu panjang = 10.0 cm dan lebar = 5.0 cm, perhitungan luas menjadi:

Luas=10.0×5.0=50.0

Hasil perhitungan luas, yaitu 50.0, kemudian disimpan dalam variabel luas.

### 3. Mencetak Hasil Perhitungan
Setelah menghitung luas, program akan menampilkan hasilnya menggunakan fungsi printf:

printf("Luas persegi panjang dengan panjang %.2f cm dan lebar %.2f cm adalah %.2f cm^2\n", panjang, lebar, luas);

Penjelasan mengenai format string di dalam printf:

%.2f adalah format specifier untuk mencetak nilai bertipe float dengan dua angka di belakang koma.

panjang, lebar, dan luas akan digantikan oleh nilai variabel yang sesuai saat string ini dicetak ke layar.

Hasil output dari program ini adalah:

Luas persegi panjang dengan panjang 10.00 cm dan lebar 5.00 cm adalah 50.00 cm^2

### 4. Akhir Program
Program diakhiri dengan perintah:

return 0;

Perintah ini menunjukkan bahwa program telah berhasil dijalankan tanpa kesalahan. Nilai 0 menunjukkan bahwa eksekusi program selesai dengan sukses.

### MODUL 3 Variabel, Konstanta Tipe Data

### LATIHAN 1
Program yang diberikan adalah program dalam bahasa C yang melakukan konversi dari Rupiah (IDR) ke Dolar AS (USD) berdasarkan kurs yang ditentukan. Berikut adalah penjelasan langkah demi langkah tentang cara kerja program ini:

### 1. Deklarasi Variabel
Program dimulai dengan mendeklarasikan beberapa variabel:

const float dolar = 14250; // kurs saat ini: 1 dolar = 14250 rupiah

float rupiah;

float rupiahdolar;

dolar adalah sebuah konstanta yang menyimpan nilai kurs saat ini, yaitu 1 USD = 14250 IDR. Konstanta ini tidak bisa diubah selama program berjalan karena dideklarasikan dengan kata kunci const.

rupiah adalah variabel bertipe float yang akan digunakan untuk menyimpan jumlah Rupiah yang dimasukkan oleh pengguna.

rupiahdolar adalah variabel bertipe float yang akan digunakan untuk menyimpan hasil konversi dari Rupiah ke Dolar AS.

### 2. Input Pengguna
Program kemudian meminta pengguna untuk memasukkan jumlah Rupiah yang ingin mereka tukar menjadi Dolar. Ini dilakukan dengan kode berikut:

printf("masukkan jumlah rupiah yang ingin ditukar : ");

scanf("%f", &rupiah);

printf digunakan untuk menampilkan pesan yang meminta pengguna untuk memasukkan jumlah Rupiah.

scanf digunakan untuk membaca input yang diberikan oleh pengguna dan menyimpannya dalam variabel rupiah. %f menunjukkan bahwa input yang dimasukkan adalah angka desimal (float).

### 3. Menghitung Konversi
Setelah mendapatkan jumlah Rupiah dari pengguna, program melakukan konversi ke Dolar AS menggunakan rumus:

rupiahdolar = rupiah / dolar;

Nilai rupiah yang dimasukkan oleh pengguna dibagi dengan nilai kurs dolar (14250). Hasilnya akan disimpan dalam variabel rupiahdolar, yang menunjukkan jumlah Dolar AS yang setara dengan jumlah Rupiah yang dimasukkan.

### 4. Menampilkan Hasil
Setelah konversi selesai, program menampilkan hasilnya menggunakan fungsi printf:

printf("jumlah dolar yang akan anda dapatkan: %.2f USD\n", rupiahdolar);

printf digunakan untuk menampilkan hasil konversi dalam format yang lebih mudah dibaca oleh pengguna.

%.2f digunakan untuk mencetak angka rupiahdolar dengan dua angka di belakang koma.

Program akan mencetak jumlah Dolar yang setara dengan jumlah Rupiah yang dimasukkan.

### 5. Akhir Program
Program diakhiri dengan perintah:

return 0;
Perintah ini menunjukkan bahwa program telah berhasil dijalankan tanpa kesalahan dan selesai dengan sukses.

### LATIHAN 2
Program yang diberikan adalah program dalam bahasa C yang mengonversi suhu dari Celsius ke tiga satuan suhu lainnya, yaitu Kelvin, Fahrenheit, dan Reamur. Berikut adalah penjelasan langkah demi langkah tentang bagaimana program ini bekerja:

### 1. Deklarasi Variabel
Program dimulai dengan mendeklarasikan beberapa variabel bertipe float:

float c; 

float kelvin, fahrenheit, reamur;

c adalah variabel yang menyimpan suhu dalam Celsius yang dimasukkan oleh pengguna.

kelvin, fahrenheit, dan reamur adalah variabel yang akan digunakan untuk menyimpan hasil konversi suhu ke dalam satuan Kelvin, Fahrenheit, dan Reamur.

### 2. Input Suhu dalam Celsius
Program meminta pengguna untuk memasukkan suhu dalam satuan Celsius dengan menggunakan fungsi scanf:

printf("Input suhu dalam Celsius: ");

scanf("%f", &c);

printf menampilkan pesan untuk meminta pengguna memasukkan nilai suhu dalam Celsius.

scanf digunakan untuk membaca input suhu dalam Celsius yang dimasukkan oleh pengguna, dan menyimpannya dalam variabel c. %f digunakan untuk membaca angka bertipe float.

### 3. Konversi Suhu
Setelah mendapatkan suhu dalam Celsius, program melakukan konversi suhu tersebut ke dalam tiga satuan suhu lainnya: Kelvin, Fahrenheit, dan Reamur.

Konversi ke Kelvin:

kelvin = c + 273.15;

Nilai suhu dalam Celsius (yang disimpan dalam c) ditambah dengan 273.15 untuk menghasilkan suhu dalam Kelvin.

Konversi ke Fahrenheit:

fahrenheit = (c * 1.8) + 32;

Rumus untuk mengonversi Celsius ke Fahrenheit adalah:

Fahrenheit
=
(
Celsius
×
1.8
)
+
32
Fahrenheit=(Celsius×1.8)+32

Nilai suhu dalam Celsius dikalikan dengan 1.8, kemudian ditambahkan dengan 32 untuk menghasilkan suhu dalam Fahrenheit.

Konversi ke Reamur:

reamur = c * 0.8;

Rumus untuk mengonversi Celsius ke Reamur adalah:

Reamur
=
Celsius
×
0.8
Reamur=Celsius×0.8

Nilai suhu dalam Celsius dikalikan dengan 0.8 untuk menghasilkan suhu dalam Reamur.

### 4. Menampilkan Hasil Konversi
Setelah melakukan konversi, program menampilkan hasil konversi suhu ke dalam tiga satuan tersebut (Kelvin, Fahrenheit, dan Reamur) menggunakan fungsi printf:


printf("Suhu dalam Kelvin: %.2f\n", kelvin);

printf("Suhu dalam Fahrenheit: %.2f\n", fahrenheit);

printf("Suhu dalam Reamur: %.2f\n", reamur);

printf digunakan untuk menampilkan hasil konversi suhu ke layar.

%.2f digunakan untuk menampilkan angka dengan dua angka di belakang koma (desimal).

kelvin, fahrenheit, dan reamur akan digantikan dengan nilai suhu yang sesuai setelah konversi dilakukan.

### 5. Akhir Program
Program diakhiri dengan perintah:

return 0;
Perintah ini menandakan bahwa program telah selesai dijalankan dan berakhir dengan sukses.

### LATIHAN 3
Program yang diberikan adalah program dalam bahasa C yang menghitung volume dan luas permukaan dari sebuah bola, berdasarkan diameter yang diberikan. Berikut adalah penjelasan langkah demi langkah mengenai cara kerja program ini:

### 1. Deklarasi Variabel
Program dimulai dengan mendeklarasikan beberapa variabel bertipe float dan konstanta:

float diameter = 12;

const float phi = 3.14;

float r = diameter * 0.5;

float volume = 4.0/3.0 * phi * r * r * r;

float luas = 4.0 * phi * r * r;

diameter: Variabel ini menyimpan nilai diameter bola. Dalam program ini, nilai diameter ditetapkan sebesar 12.

phi: Ini adalah konstanta yang menyimpan nilai perkiraan π (Pi), yang dalam program ini diberi nilai 3.14.

r: Variabel ini menyimpan nilai jari-jari bola yang dihitung dari diameter, dengan rumus 

𝑟
=
diameter
2
r= 
2
diameter
​
 . Di sini, nilai diameter 12 dibagi 2, sehingga jari-jari 
𝑟
r menjadi 6.

volume: Variabel ini menyimpan hasil perhitungan volume bola yang dihitung menggunakan rumus volume bola:

Volume
=
4
3
×
𝜋
×
𝑟
3
Volume= 
3
4
​
 ×π×r 
3
 
luas: Variabel ini menyimpan hasil perhitungan luas permukaan bola yang dihitung dengan rumus luas permukaan bola:

Luas
=
4
×
𝜋
×
𝑟
2
Luas=4×π×r 
2
 
### 2. Perhitungan Volume Bola
Setelah mendeklarasikan variabel-variabel tersebut, program menghitung volume bola dengan rumus:

volume = 4.0/3.0 * phi * r * r * r;

Rumus untuk volume bola adalah 
4
3
×
𝜋
×
𝑟
3
3
4
​
 ×π×r 
3
 , di mana 
𝑟

r adalah jari-jari bola.

Dalam program ini, phi adalah nilai π, dan r adalah jari-jari yang sebelumnya dihitung sebagai 6. Sehingga volume bola menjadi:

Volume
=
4
3
×
3.14
×
6
3
=
4
3
×
3.14
×
216
=
904.32
Volume= 
3
4
​
 ×3.14×6 
3
 = 
3
4
​
 ×3.14×216=904.32
 
Volume bola yang dihitung adalah 904.32.

### 3. Perhitungan Luas Permukaan Bola
Selanjutnya, program menghitung luas permukaan bola dengan rumus:

luas = 4.0 * phi * r * r;

Rumus untuk luas permukaan bola adalah 
4
×
𝜋
×
𝑟
2
4×π×r 
2
 , di mana 
𝑟
r adalah jari-jari bola.

Dengan nilai r sebesar 6, perhitungan luas permukaan bola menjadi:
Luas
=
4
×
3.14
×
6
2
=
4
×
3.14
×
36
=
452.16
Luas=4×3.14×6 
2
 =4×3.14×36=452.16
 
Luas permukaan bola yang dihitung adalah 452.16.

### 4. Menampilkan Hasil Perhitungan
Setelah melakukan perhitungan volume dan luas permukaan bola, program menampilkan hasilnya menggunakan fungsi printf:

printf("volume: %.2f\n", volume);

printf("luas; %.2f\n", luas);

printf("volume: %.2f\n", volume); mencetak volume bola dengan dua angka di belakang koma.

printf("luas; %.2f\n", luas); mencetak luas permukaan bola juga dengan dua angka di belakang koma.

Output yang ditampilkan ke layar adalah:

volume: 904.32

luas; 452.16

### 5. Akhir Program
Program diakhiri dengan perintah:

return 0;
Perintah ini menunjukkan bahwa program telah selesai dieksekusi dengan sukses tanpa kesalahan.

### MODUL 4 Operator

### LATIHAN 1

### Penjelasan Program:

Deklarasi Variabel:

detik: Menyimpan input jumlah waktu dalam detik.

jam: Menyimpan hasil konversi dari detik ke jam.

menit: Menyimpan hasil konversi dari detik ke menit.

sisadetik: Menyimpan sisa detik setelah konversi ke menit.

### Input Pengguna:

Program meminta pengguna untuk memasukkan jumlah waktu dalam detik melalui perintah scanf.
Proses Konversi:

jam = detik / 3700;

Baris ini bertujuan untuk mengonversi detik ke jam. Namun, ini salah karena 1 jam seharusnya setara dengan 3600 detik, bukan 3700. Jadi, seharusnya ditulis:

Program mencetak hasil konversi waktu dalam format jam, menit, dan detik menggunakan printf.

### LATIHAN 2















