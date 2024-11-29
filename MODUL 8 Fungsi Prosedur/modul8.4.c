#include <stdio.h>

// Fungsi untuk menghitung besar potongan (diskon)
float potong(float total_pembelian) {
    float diskon = 0;

    // Menentukan besar diskon berdasarkan total pembelian
    if (total_pembelian > 3000000) {
        diskon = total_pembelian * 0.35;  // Diskon 35% jika pembelian di atas 3 juta
    } else if (total_pembelian >= 1000000) {
        diskon = total_pembelian * 0.20;  // Diskon 20% jika pembelian di antara 1 juta dan 3 juta
    }
    // Jika pembelian kurang dari 1 juta, tidak ada diskon (diskon = 0)
    return diskon;
}

int main() {
    float total_pembelian, diskon, yang_harus_dibayar;

    // Input total pembelian
    printf("Program Hitung Potongan\n");
    printf("Total Pembelian (Rp.) : ");
    scanf("%f", &total_pembelian);

    // Menghitung besar diskon
    diskon = potong(total_pembelian);

    // Menghitung jumlah yang harus dibayar setelah diskon
    yang_harus_dibayar = total_pembelian - diskon;

    // Menampilkan hasil
    printf("Besar Diskon : Rp. %.2f\n", diskon);
    printf("Besar Yang Harus Dibayarkan : Rp. %.2f\n", yang_harus_dibayar);

    return 0;
}
