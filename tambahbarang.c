#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PANJANG_NAMA 100
#define MAX_BARANG 100

typedef struct {
    char namaBarang[MAX_PANJANG_NAMA];
    int hargaBarang;
    int jumlahBarang;
} Barang;

void tambahJumlahBarang() {
    FILE *file = fopen("barang.txt", "a");
    if (file == NULL) {
        printf("Terjadi kesalahan! Gagal membuka file.\n");
        exit(1);
    }

    Barang daftarBarang[MAX_BARANG];
    int jumlahBarang = 0;
    char tambahLagi = 'y';

    while (tambahLagi == 'y' || tambahLagi == 'Y') {
        if (jumlahBarang >= MAX_BARANG) {
            printf("Maaf, daftar barang sudah penuh.\n");
            break;
        }

        printf("\nMasukkan nama barang: ");
        scanf("%s", daftarBarang[jumlahBarang].namaBarang);
        printf("Masukkan harga barang: ");
        scanf("%d", &daftarBarang[jumlahBarang].hargaBarang);
        printf("Masukkan jumlah barang: ");
        scanf("%d", &daftarBarang[jumlahBarang].jumlahBarang);

        fprintf(file, "Nama Barang: %s\nHarga: %d\nJumlah: %d\n\n", daftarBarang[jumlahBarang].namaBarang,
                daftarBarang[jumlahBarang].hargaBarang, daftarBarang[jumlahBarang].jumlahBarang);

        jumlahBarang++;
        printf("\nTambahkan barang lagi? (y/n): ");
        scanf(" %c", &tambahLagi);
    }

    fclose(file);
}