#include <stdio.h>

int main() {
    // Mendeklarasikan variabel
    int i;
    float nilai[20];  // Array untuk menyimpan nilai mahasiswa
    float total = 0, rata_rata;

    // Input nilai untuk 20 mahasiswa
    printf("Masukkan nilai untuk 20 mahasiswa:\n");
    for (i = 0; i < 20; i++) {
        printf("Nilai mahasiswa ke-%d: ", i + 1);
        scanf("%f", &nilai[i]);
        total += nilai[i];  // Menambahkan nilai ke total
    }

    // Menghitung rata-rata
    rata_rata = total / 20;

    // Menampilkan hasil rata-rata
    printf("\nRata-rata nilai mahasiswa: %.2f\n", rata_rata);

    return 0;
}
