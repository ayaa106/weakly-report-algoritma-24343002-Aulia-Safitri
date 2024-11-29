#include <stdio.h>

int main() {
    // Mendeklarasikan array string
    char str[] = "BORLAND";
    
    // Pointer untuk menunjuk ke karakter pertama dari string
    char *ptr = str;

    // Menampilkan secara bertahap dengan pointer
    for (int i = 1; i <= 7; i++) {
        for (int j = 0; j < i; j++) {
            printf("%c", *(ptr + j));  // Menampilkan karakter berdasarkan pointer
        }
        printf("\n");
    }

    return 0;
}
