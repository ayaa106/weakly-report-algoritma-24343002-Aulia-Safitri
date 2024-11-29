#include <stdio.h>
#include <string.h>

int main() {
    char kalimat[100], *ptr, *ptr_akhir;

    // Meminta input kalimat dari pengguna
    printf("Masukkan kalimat: ");
    fgets(kalimat, sizeof(kalimat), stdin);

    // Menghapus karakter newline yang dihasilkan oleh fgets
    kalimat[strcspn(kalimat, "\n")] = '\0';

    // Menentukan pointer untuk awal dan akhir kalimat
    ptr = kalimat;
    ptr_akhir = kalimat + strlen(kalimat) - 1;

    printf("Kebalikannya: ");
    // Menampilkan kalimat terbalik
    while (ptr_akhir >= ptr) {
        printf("%c", *ptr_akhir);  
        ptr_akhir--; 
    }

    printf("\n");

    return 0;
}
