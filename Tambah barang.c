#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BARANG 100

typedef struct {
    char nama[50];
    int harga;
    int jumlah;
} Barang;

int main() {
    Barang daftarBarang[MAX_BARANG];
    int jumlahBarang = 0; 

    
    char tambahLagi = 'y';
    while (tambahLagi == 'y' || tambahLagi == 'y') {

        if (jumlahBarang >= MAX_BARANG) {
            printf("Maaf, daftar barang sudah penuh.\n");
            break;
        }

        printf("\nMasukkan nama barang: ");
        scanf("%s", daftarBarang[jumlahBarang].nama);
        printf("Masukkan harga barang: ");
        scanf("%d", &daftarBarang[jumlahBarang].harga);
        printf("Masukkan jumlah barang: ");
        scanf("%d", &daftarBarang[jumlahBarang].jumlah);

        jumlahBarang++; 
        printf("\nTambahkan barang lagi? (y/n): ");
        scanf(" %c", &tambahLagi);
    }

    printf("\nDaftar Barang:\n");
    printf("-------------------------------------------------\n");
    printf("  Nama Barang        Harga       Jumlah\n");
    printf("-------------------------------------------------\n");
    for (int i = 0; i < jumlahBarang; i++) {
        printf("  %-20s %-10d %-10d\n", daftarBarang[i].nama, daftarBarang[i].harga, daftarBarang[i].jumlah);
    }
    printf("-------------------------------------------------\n");

    return 0;
}
