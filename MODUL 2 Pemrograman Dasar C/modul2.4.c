#include <stdio.h>

int main() {
    
    float panjang = 10.0, lebar = 5.0, luas;

    // Menghitung luas persegi panjang
    luas = panjang * lebar;

    // Menampilkan hasil perhitungan luas
    printf("Luas persegi panjang dengan panjang %.2f cm dan lebar %.2f cm adalah %.2f cm^2\n", panjang, lebar, luas);

    return 0;
}
