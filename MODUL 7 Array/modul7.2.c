#include <stdio.h>

int main() {
    int n;  // Variabel untuk menyimpan jumlah mahasiswa
    printf("Input banyak mahasiswa: ");
    scanf("%d", &n);  // Meminta input jumlah mahasiswa

    // Deklarasi array untuk menyimpan nama mahasiswa
    char nama_mahasiswa[n][100];  // Array 2D untuk menyimpan nama mahasiswa, maksimal 100 karakter

    // Input nama mahasiswa
    for (int i = 0; i < n; i++) {
        printf("Input nama mahasiswa %d: ", i + 1);
        getchar();  // Membersihkan newline karakter dari input sebelumnya
        fgets(nama_mahasiswa[i], sizeof(nama_mahasiswa[i]), stdin);  // Membaca nama mahasiswa
    }

    // Menampilkan nama mahasiswa yang telah diinput
    printf("\nDaftar nama mahasiswa:\n");
    for (int i = 0; i < n; i++) {
        printf("Nama mahasiswa ke-%d: %s", i + 1, nama_mahasiswa[i]);  // Menampilkan nama mahasiswa
    }

    return 0;
}
