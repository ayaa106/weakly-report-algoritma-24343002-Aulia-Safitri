#include <stdio.h>

int main() {
    // Bagian A
    int Lesley = 57082;  // Nilai Lesley
    int Layla, Balmond;

    // Bagian A
    Layla = Lesley;  // Layla mendapatkan nilai Lesley
    Balmond = Layla + 1;  // Balmond adalah Layla + 1
    
    // Menampilkan hasil Bagian A
    printf("Bagian A:\n");
    printf("a) Nilai Layla: %d\n", Layla);  // Layla = Lesley
    printf("b) Nilai Balmond: %d\n\n", Balmond);  // Balmond = Layla + 1

    // Bagian B
    int *LaylaPtr;  // Pointer untuk Layla
    LaylaPtr = &Lesley;  // LaylaPointer menunjuk ke alamat Lesley
    
    Balmond = *LaylaPtr + 1;  // Balmond = nilai yang ditunjuk LaylaPointer + 1
    
    // Menampilkan hasil Bagian B
    printf("Bagian B:\n");
    printf("a) Nilai Layla (pointer): %p\n", LaylaPtr);  // Menampilkan alamat memori Layla
    printf("b) Nilai Balmond: %d\n", Balmond);  // Balmond = nilai dari Lesley + 1
    
    return 0;
}
