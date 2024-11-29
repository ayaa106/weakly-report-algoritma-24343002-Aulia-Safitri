
#include <stdio.h>

int main (){
    char nama[100],nim[50],programstudi[45],fakultas[23];
    float pratikum, UTS, UAS, nilaiakhir;

    printf("masukkan nama anda:");
    scanf ("%s", &nama);

    printf("masukkan nim anda:");
    scanf("%s", &nim);

    printf("masukkan nama program studi anda:");
    scanf("%s", &programstudi);

    printf("masukkan nama fakultas anda:");
    scanf("%s", &fakultas);

    printf("masukkan nilai pratikum:");
    scanf("%f", &pratikum);

    printf("masukkan nilai uts:");
    scanf("%f", &UTS);

    printf("masukkan nilai UAS:");
    scanf("%f", &UAS);

    nilaiakhir = (0.3*pratikum) + (0.3*UTS) + (0.4*UAS);

    printf("NAMA:%s\n", nama);
    printf("NIM:%S\n", nim);
    printf("PROGRAM STUDI:%s\n", programstudi);
    printf("FAKULTAS:%s\n", fakultas);
    printf("PRATIKUM:%.2f\n", pratikum);
    printf("UTS:%.2f\n", UTS);
    printf("UAS:%.2f\n", UAS);
    return 0; 
    
}