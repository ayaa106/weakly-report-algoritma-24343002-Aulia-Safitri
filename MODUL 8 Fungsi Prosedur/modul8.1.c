#include <stdio.h>

// Fungsi rekursif untuk menghitung perkalian
int perkalian(int a, int b) {
    // Basis: jika b == 1, return a
    if (b == 1) {
        return a;
    } else {
        // Rekursif: a + perkalian(a, b-1)
        return a + perkalian(a, b - 1);
    }
}

int main() {
    int a, b;

    // Meminta input dari pengguna
    printf("Masukkan bilangan pertama: ");
    scanf("%d", &a);
    printf("Masukkan bilangan kedua: ");
    scanf("%d", &b);

    // Menghitung hasil perkalian
    int hasil = perkalian(a, b);

    // Menampilkan hasil
    printf("Hasil %d x %d = %d\n", a, b, hasil);

    return 0;
}
