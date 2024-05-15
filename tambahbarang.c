#include <stdio.h>
#include <string.h>
#include "header.h"
#include <stdlib.h>

#define MAX_BARANG 100
#define MAX_PANJANG_NAMA 50
#define NAMA_FILE "barang.txt"

void tambahBarang() {
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
        fgets(daftarBarang[jumlahBarang].namaBarang, MAX_PANJANG_NAMA, stdin);
        daftarBarang[jumlahBarang].namaBarang[strcspn(daftarBarang[jumlahBarang].namaBarang, "\n")] = '\0';

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