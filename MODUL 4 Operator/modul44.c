#include <stdio.h>

int main() {
    int durasi;        
    int tarif_per_jam = 15000;  
    int tarif_berikutnya = tarif_per_jam / 2;  
    int total_bayar = 0;  

    // Meminta input durasi menonton film
    printf("Masukkan durasi menonton film (dalam jam): ");
    scanf("%d", &durasi);

    // Menghitung total biaya
    if (durasi == 1) {
        total_bayar = tarif_per_jam;  // Hanya 1 jam pertama
    } else if (durasi > 1) {
        // 1 jam pertama
        total_bayar = tarif_per_jam;
        
        total_bayar += (durasi - 1) * tarif_berikutnya;
    }

    // Menampilkan total biaya
    printf("Total yang harus dibayar untuk durasi %d jam adalah Rp %d\n", durasi, total_bayar);

    return 0;
}
