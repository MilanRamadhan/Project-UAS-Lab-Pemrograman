#define MAX_USERNAME_LENGTH 20
#define MAX_PASSWORD_LENGTH 20

struct User {
    char username[MAX_USERNAME_LENGTH];
    char password[MAX_PASSWORD_LENGTH];
};
void registerUser(struct User *users, int *userCount);
int loginUser(struct User *users, int userCount);

#define MAX_BARANG 100
#define MAX_PANJANG_NAMA 50
#define NAMA_FILE "barang.txt"

// Struktur data untuk barang
typedef struct {
    char namaBarang[MAX_PANJANG_NAMA];
    int jumlahBarang;
    int hargaBarang;
    
} Barang;
void tambahJumlahBarang();