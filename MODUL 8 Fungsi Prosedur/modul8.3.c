#include <stdio.h>

// Fungsi untuk menghitung luas lingkaran
float luas(float radius) {
    return 3.14 * radius * radius;  // Rumus luas = π * r^2
}

// Fungsi untuk menghitung keliling lingkaran
float keliling(float radius) {
    return 2 * 3.14 * radius;  // Rumus keliling = 2 * π * r
}

int main() {
    float radius, hasil_luas, hasil_keliling;

    printf("Masukkan radius lingkaran: ");
    scanf("%f", &radius);

    hasil_luas = luas(radius);
    hasil_keliling = keliling(radius);

    // Menampilkan hasil
    printf("Luas lingkaran dengan radius %.2f adalah: %.2f\n", radius, hasil_luas);
    printf("Keliling lingkaran dengan radius %.2f adalah: %.2f\n", radius, hasil_keliling);

    return 0;
}
