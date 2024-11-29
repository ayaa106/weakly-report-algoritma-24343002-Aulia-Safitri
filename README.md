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
Pilih untuk menambahkan VS Code ke PATH (direkomendasikan untuk kemudahan penggunaan melalui terminal).
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











