#include <stdio.h>

int main() {
    int i;

    // Menampilkan bilangan genap dari 0 hingga 50
    printf("Deret bilangan genap dari 0 hingga 50:\n");
    for (i = 0; i <= 50; i++) {
        if (i % 2 == 0) {  // Mengecek jika angka genap
            printf("%d ", i);
        }
    }

    printf("\n\n");

    // Menampilkan bilangan ganjil dari 0 hingga 50
    printf("Deret bilangan ganjil dari 0 hingga 50:\n");
    for (i = 1; i <= 50; i++) {
        if (i % 2 != 0) {  // Mengecek jika angka ganjil
            printf("%d ", i);
        }
    }

    return 0;
}
