#include "header.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bacaDataBarang() {
    FILE *file = fopen("barang.txt", "r");
    if (file == NULL) {
        printf("Gagal membuka file.\n");
        return;
    }

    char line[100];
    while (fgets(line, sizeof(line), file)) {
        char *nama = strtok(line, ":");
        char *harga = strtok(NULL, ":");
        char *jumlah = strtok(NULL, ":");

        if (nama != NULL && harga != NULL && jumlah != NULL) {
            strcpy(daftarBarang[jumlahBarang].namaBarang, nama);
            daftarBarang[jumlahBarang].hargaBarang = atof(harga);
            daftarBarang[jumlahBarang].jumlahBarang = atoi(jumlah);

            jumlahBarang++;
        }
    }

    fclose(file);
}

void tampilkanDaftarBarang() {
    printf("Daftar Barang:\n");
    printf("-------------\n");
    printf("No.  Nama Barang              Stok    Harga\n");
    printf("-----------------------------------------\n");

    for (int i = 0; i < jumlahBarang; i++) {
        printf("%-4d %-24s %-8d %.2f\n", i + 1, daftarBarang[i].namaBarang, daftarBarang[i].jumlahBarang, daftarBarang[i].hargaBarang);
    }

    printf("-----------------------------------------\n");
}