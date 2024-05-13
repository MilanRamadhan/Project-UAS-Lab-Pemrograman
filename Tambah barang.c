#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BARANG 100
#define MAX_PANJANG_NAMA 50
#define NAMA_FILE "barang.txt"

// Struktur data untuk barang
typedef struct {
    char namaBarang[MAX_PANJANG_NAMA];
    int jumlahBarang;
    int hargaBarang;
    
} Barang;

// Fungsi untuk menambahkan barang
void tambahJumlahBarang(char *namaBarang, int jumlahBarangAwal) {
    FILE *file = fopen(NAMA_FILE, "a");
    if (file == NULL) {
        printf("Terjadi kesalahan! Gagal membuka file.\n");
        exit(1);
    }

    Barang daftarBarang[MAX_BARANG];
    int jumlahBarang = jumlahBarangAwal; 
    char tambahLagi = 'y';

    while (tambahLagi == 'y' || tambahLagi == 'y') {

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

        fprintf(file, "Nama Barang: %s\nHarga: %d\nJumlah: %d\n\n", daftarBarang[jumlahBarang].namaBarang, daftarBarang[jumlahBarang].hargaBarang, daftarBarang[jumlahBarang].jumlahBarang);
       
        jumlahBarang++; 
        printf("\nTambahkan barang lagi? (y/n): ");
        scanf(" %c", &tambahLagi);
    }

    printf("\nDaftar Barang:\n");
    printf("-------------------------------------------------\n");
    printf("  Nama Barang        Harga       Jumlah\n");
    printf("-------------------------------------------------\n");
    for (int i = 0; i < jumlahBarang; i++) {
        printf("  %-20s %-10d %-10d\n", daftarBarang[i].namaBarang, daftarBarang[i].hargaBarang, daftarBarang[i].jumlahBarang);
    }
    printf("-------------------------------------------------\n");

    fclose(file);
   
}
