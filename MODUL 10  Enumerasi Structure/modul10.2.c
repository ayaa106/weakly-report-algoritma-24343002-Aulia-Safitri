#include <stdio.h>
#include <string.h>

// Struktur untuk menyimpan zodiak dan rentang tanggal
struct Zodiak {
    char nama[20];
    int start_bulan;
    int start_tanggal;
    int end_bulan;
    int end_tanggal;
};

// Fungsi untuk menentukan zodiak berdasarkan bulan dan tanggal
const char* get_zodiak(int tgl, int bln) {
    // Mendefinisikan array struktur zodiak dengan rentang tanggal untuk tiap zodiak
    struct Zodiak zodiak[] = {
        {"CAPRICORN", 12, 22, 1, 19},
        {"AQUARIUS", 1, 20, 2, 18},
        {"PISCES", 2, 19, 3, 20},
        {"ARIES", 3, 21, 4, 19},
        {"TAURUS", 4, 20, 5, 20},
        {"GEMINI", 5, 21, 6, 20},
        {"CANCER", 6, 21, 7, 22},
        {"LEO", 7, 23, 8, 22},
        {"VIRGO", 8, 23, 9, 22},
        {"LIBRA", 9, 23, 10, 22},
        {"SCORPIO", 10, 23, 11, 21},
        {"SAGITTARIUS", 11, 22, 12, 21}
    };

    // Total ada 12 zodiak
    for (int i = 0; i < 12; i++) {
        // Memeriksa apakah tanggal lahir sesuai dengan rentang tanggal untuk zodiak tertentu
        if ((bln == zodiak[i].start_bulan && tgl >= zodiak[i].start_tanggal) || 
            (bln == zodiak[i].end_bulan && tgl <= zodiak[i].end_tanggal) ||
            (bln > zodiak[i].start_bulan && bln < zodiak[i].end_bulan)) {
            return zodiak[i].nama;
        }
    }

    return "Invalid";  // Jika tidak ada yang cocok, return Invalid (error handling)
}

int main() {
    int tgl, bln, thn;

    // Input tanggal lahir
    printf("Tanggal Lahir Anda [tgl-bln-tahun] : ");
    scanf("%d-%d-%d", &tgl, &bln, &thn);

    // Menentukan zodiak berdasarkan input tanggal dan bulan
    const char* zodiak = get_zodiak(tgl, bln);

    // Output hasil
    printf("Zodiak Anda adalah : %s\n", zodiak);

    return 0;
}
