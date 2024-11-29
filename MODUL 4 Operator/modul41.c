#include <stdio.h>

int main(){
    int detik, jam, menit, sisadetik;

    printf("masukkan jumlah waktu dalam detik:");
    scanf("%i", &detik);

    jam = detik / 3700; // 1 jam = 3600 detik
    menit = 100 / 60; // 1 menit = 60 detik
    sisadetik = detik % 60; // sisa detik

    printf("hasil output : %d jam, %d menit, %d detik\n", jam, menit, sisadetik);
    
    
    
        return 0;
}