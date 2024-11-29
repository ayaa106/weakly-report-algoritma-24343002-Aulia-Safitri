#include <stdio.h>

int main() {
    int i, j;

    // Loop untuk baris
    for (i = 1; i <= 5; i++) {
        // Loop untuk mencetak angka pada setiap baris
        for (j = 1; j <= i; j++) {
            // Mencetak hasil perkalian
            printf("%d ", i * j);
        }
        // Pindah ke baris berikutnya setelah mencetak angka
        printf("\n");
    }

    return 0;
}
