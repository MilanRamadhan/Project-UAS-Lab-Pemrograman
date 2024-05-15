#include <stdio.h>
#include "header.h"
#include <stdlib.h>

int main() {
    struct User users[10];
    int userCount = 0;
    int loggedIn = 0;

    while (!loggedIn) {
        int choice;

        printf("===== Kasir Sederhana =====\n");
        printf("1. Registrasi\n");
        printf("2. Login\n");
        printf("3. Keluar\n");
        printf("4. tambah barang\n");
        printf("5. melihat daftar barang\n");
        printf("6. kurangi daftar barang\n");
        printf("Pilihan: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                registerUser(users, &userCount);
                break;
            case 2:
                loggedIn = loginUser(users, userCount);
                break;
            case 3:
                printf("Terima kasih. Sampai jumpa!\n");
                exit(0);
            case 4:
                tambahBarang();
                break;
            case 5:
                tampilkandaftarbarang();
                break;
            case 6:
                kurangiJumlahBarang();
                printf("Nama Barang yang ingin dikurangi: ");
                scanf("%s", namaBarang);
                printf("Jumlah Barang yang ingin dikurangi: ");
                scanf("%d", &jumlahBarang);

                kurangiJumlahBarang(namaBarang, jumlahBarang);

                break;
            default:
                printf("Pilihan tidak valid.\n");
                break;
        }

        printf("\n");
    }

    return 0;
}