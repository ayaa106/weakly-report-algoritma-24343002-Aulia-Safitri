#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    int komputer, tebakan, percobaan;
    char play_again;

    srand(time(NULL));

    do {
        // Komputer memilih nomor acak antara 1 dan 20
        komputer = rand() % 20 + 1;

        percobaan = 0;
        printf("Tebak angka yang dipilih oleh komputer (antara 1 dan 20): \n");

        do {
            printf("Tebakan Anda: ");
            scanf("%d", &tebakan);
            percobaan++;

            // Memberi petunjuk berdasarkan tebakan
            if (tebakan < komputer) {
                printf("Nomor saya lebih besar!\n");
            } else if (tebakan > komputer) {
                printf("Nomor saya lebih kecil!\n");
            } else {
                printf("Selamat, Anda benar!\n");
                printf("Jumlah percobaan yang diperlukan: %d\n", percobaan);
            }
        } while (tebakan != komputer);

        // Menanyakan apakah ingin bermain lagi
        printf("Apakah Anda ingin bermain lagi? (y/n): ");
        getchar();  
        scanf("%c", &play_again);

    } while (play_again == 'y' || play_again == 'Y');

    printf("Terima kasih telah bermain!\n");
}
