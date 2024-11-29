#include <stdio.h>

int main() {

    float nilaiPresensi = 85;
    float nilaiPraktek = 65;
    float nilaiUTS = 80;
    float nilaiUAS = 75;

    
    float bobotPresensi = 0.1;
    float bobotPraktek = 0.2;
    float bobotUTS = 0.3;
    float bobotUAS = 0.4;

    float nilaiAkhir = (nilaiPresensi * bobotPresensi) +
                       (nilaiPraktek * bobotPraktek) +
                       (nilaiUTS * bobotUTS) +
                       (nilaiUAS * bobotUAS);

    printf("Nilai Akhir: %.2f\n", nilaiAkhir);

    return 0;
}
