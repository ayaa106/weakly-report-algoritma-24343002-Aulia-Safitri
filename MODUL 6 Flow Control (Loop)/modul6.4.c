#include <stdio.h>

int main() {
    // Data akun Hattori
    char no_rek[] = "0123";
    char nama_akun[] = "Hattori";
    float saldo = 175000;  // Saldo awal Hattori
    int pilihan;
    float setoran, penarikan;

    while (1) {
        // Menampilkan menu
        printf("ATM\n");
        printf("1) Cek Saldo\n");
        printf("2) Setoran\n");
        printf("3) Penarikan Tunai\n");
        printf("4) Exit\n");
        printf("Pilih menu (1/2/3/4): ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                // Menampilkan saldo
                printf("Saldo Anda saat ini: Rp. %.2f\n", saldo);
                break;
            
            case 2:
                // Setoran
                printf("Masukkan jumlah setoran: Rp. ");
                scanf("%f", &setoran);
                saldo += setoran;
                printf("Setoran berhasil! Saldo Anda saat ini: Rp. %.2f\n", saldo);
                break;
            
            case 3:
                // Penarikan
                printf("Masukkan jumlah penarikan: Rp. ");
                scanf("%f", &penarikan);

                // Cek apakah saldo mencukupi dan lebih dari Rp. 50.000
                if (saldo - penarikan >= 50000) {
                    saldo -= penarikan;
                    printf("Penarikan berhasil! Saldo Anda saat ini: Rp. %.2f\n", saldo);
                } else {
                    printf("Penarikan gagal! Saldo minimal yang harus disisakan adalah Rp. 50.000\n");
                }
                break;
            
            case 4:
                // Keluar dari program
                printf("Terima kasih telah menggunakan ATM. Selamat tinggal!\n");
                return 0;
            
            default:
                // Menangani input yang tidak valid
                printf("Pilihan tidak valid! Silakan pilih menu yang tersedia.\n");
        }
    }

    return 0;
}
