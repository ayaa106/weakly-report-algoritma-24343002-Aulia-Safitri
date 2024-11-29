#include <stdio.h>
#include <string.h>

int main() {
    
    char username_terdaftar[] = "lililala123";  
    char password_terdaftar[] = "ayaa123";  
    
    // Variabel untuk menyimpan input pengguna
    char username_input[50], password_input[50];
    
    // Meminta input dari pengguna
    printf("Masukkan username: ");
    scanf("%s", username_input);  
    
    printf("Masukkan password: ");
    scanf("%s", password_input);  

    // Memeriksa apakah username dan password yang dimasukkan sesuai
    if (strcmp(username_input, username_terdaftar) == 0 && strcmp(password_input, password_terdaftar) == 0) {
        printf("Berhasil login!\n");  // Menampilkan pesan berhasil login
    } else {
        printf("Password salah!\n");  // Menampilkan pesan password salah
    }

    return 0;
}
