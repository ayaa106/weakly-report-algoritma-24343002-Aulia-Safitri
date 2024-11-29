#include <stdio.h>
#include <string.h>

struct Mahasiswa {
    char npm[15];
    char nama[50];
    char tgl_lahir[15];
    char alamat[100];
    char hp[15];
};

int main() {
    struct Mahasiswa mhs[100]; // Array untuk menyimpan data mahasiswa
    int count = 0; // Untuk menghitung jumlah mahasiswa yang sudah dimasukkan
    char lagi; // Untuk mengecek apakah pengguna ingin memasukkan data lagi
    
    do {
        // Meminta input data mahasiswa
        printf("Masukkan NPM: ");
        scanf("%s", mhs[count].npm);

        printf("Masukkan NAMA: ");
        getchar(); // Untuk menghapus newline dari buffer sebelumnya
        fgets(mhs[count].nama, sizeof(mhs[count].nama), stdin);
        mhs[count].nama[strcspn(mhs[count].nama, "\n")] = 0; // Menghapus newline dari string input

        printf("Masukkan TGL LAHIR (dd-mm-yyyy): ");
        scanf("%s", mhs[count].tgl_lahir);

        printf("Masukkan ALAMAT: ");
        getchar(); // Menghapus newline dari buffer
        fgets(mhs[count].alamat, sizeof(mhs[count].alamat), stdin);
        mhs[count].alamat[strcspn(mhs[count].alamat, "\n")] = 0; // Menghapus newline

        printf("Masukkan HP: ");
        scanf("%s", mhs[count].hp);

        count++; // Menambahkan jumlah mahasiswa yang dimasukkan
        
        // Menanyakan apakah pengguna ingin memasukkan data lagi
        printf("Mau memasukkan data lagi [y/t]? ");
        scanf(" %c", &lagi); // Menambahkan spasi sebelum %c untuk menangkap newline

    } while(lagi == 'y' || lagi == 'Y'); // Jika 'y' atau 'Y' maka akan meminta input lagi
    
    // Menampilkan semua data mahasiswa yang sudah dimasukkan
    printf("\nData Mahasiswa yang telah dimasukkan:\n");
    for (int i = 0; i < count; i++) {
        printf("%s %s %s %s %s\n", mhs[i].npm, mhs[i].nama, mhs[i].tgl_lahir, mhs[i].alamat, mhs[i].hp);
    }

    return 0;
}
