#define MAX_USERNAME_LENGTH 20
#define MAX_PASSWORD_LENGTH 20

struct User {
    char username[MAX_USERNAME_LENGTH];
    char password[MAX_PASSWORD_LENGTH];
};
void registerUser(struct User *users, int *userCount);
int loginUser(struct User *users, int userCount);

#define MAX_BARANG 100
#define MAX_PANJANG_NAMA 100
#define NAMA_FILE "barang.txt"

struct Barang daftarBarang[MAX_BARANG];
int jumlahBarang = 0;
typedef struct {
    char namaBarang[MAX_PANJANG_NAMA];
    int jumlahBarang;
    int hargaBarang;
} Barang;
struct Barang {
    char nama[100];
    int stok;
    double harga;
};
#define MAX_PANJANG_NAMA 100
#define MAX_BARANG 100

struct Barang {
    char namaBarang[MAX_PANJANG_NAMA];
    int hargaBarang;
    int jumlahBarang;
};

extern struct Barang daftarBarang[MAX_BARANG];
extern int jumlahBarang;

void tambahBarang();
void tambahJumlahBarang();
void tampilkanDaftarBarang();
void bacadaftarBarang();
void bacadatabarang();
