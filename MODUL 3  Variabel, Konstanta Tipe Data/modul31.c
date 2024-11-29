#include <stdio.h>

int main(){
    const float dolar = 14250; // kurs saat ini: 1 dolar = 14250 rupiah
    float rupiah;
    float rupiahdolar;

    printf("masukkan jumlah rupiah yang ingin ditukar : ");
    scanf("%f", &rupiah);

    rupiahdolar = rupiah/dolar;
    
    printf("jumlah dolar yang akan anda dapatkan: %.2f USD\n", rupiahdolar);

    return 0;
}