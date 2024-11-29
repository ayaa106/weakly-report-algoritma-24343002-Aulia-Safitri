#include <stdio.h>

// Fungsi untuk penjumlahan
float penjumlahan(float a, float b) {
    return a + b;
}

// Fungsi untuk pengurangan
float pengurangan(float a, float b) {
    return a - b;
}

// Fungsi untuk perkalian
float perkalian(float a, float b) {
    return a * b;
}

// Fungsi untuk pembagian
float pembagian(float a, float b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Error: Pembagian dengan nol tidak diperbolehkan.\n");
        return 0; 
    }
}

int main() {
    float num1, num2, hasil;
    int pilihan;

    // Meminta input angka pertama dan kedua
    printf("Masukkan angka pertama: ");
    scanf("%f", &num1);
    printf("Masukkan angka kedua: ");
    scanf("%f", &num2);

    // Menampilkan menu pilihan
    printf("\nPilih operasi aritmetik:\n");
    printf("1. Penjumlahan\n");
    printf("2. Pengurangan\n");
    printf("3. Perkalian\n");
    printf("4. Pembagian\n");
    printf("Masukkan pilihan (1/2/3/4): ");
    scanf("%d", &pilihan);

    // Melakukan perhitungan berdasarkan pilihan pengguna
    switch (pilihan) {
        case 1:
            hasil = penjumlahan(num1, num2);
            printf("%.2f + %.2f = %.2f\n", num1, num2, hasil);
            break;
        case 2:
            hasil = pengurangan(num1, num2);
            printf("%.2f - %.2f = %.2f\n", num1, num2, hasil);
            break;
        case 3:
            hasil = perkalian(num1, num2);
            printf("%.2f * %.2f = %.2f\n", num1, num2, hasil);
            break;
        case 4:
            hasil = pembagian(num1, num2);
            if (num2 != 0) {
                printf("%.2f / %.2f = %.2f\n", num1, num2, hasil);
            }
            break;
        default:
            printf("Pilihan tidak valid!\n");
    }

    return 0;
}
