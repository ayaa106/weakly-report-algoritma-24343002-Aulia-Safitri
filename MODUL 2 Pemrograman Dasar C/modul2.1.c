#include <stdio.h>

int main() {
    char nama[100]; 

    
    printf("Hello, siapa nama lengkapmu? ");

    // Menginputkan nama lengkap dari pengguna
    fgets(nama, sizeof(nama), stdin); 

    // Menampilkan pesan selamat datang
    printf("Selamat Datang %s dalam Pemrograman C!\n", nama);

    return 0;
}
