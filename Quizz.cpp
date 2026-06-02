#include <iostream>
#include <fstream>
#include <string>
#include <array>
#include <vector>
#include <stdexcept>

using namespace std;

// Struktur data untuk Barang Gudang
struct Barang {
    string id;
    string nama;
    string harga;
};

class TokoElektronik {
private:
    // 1. Enkapsulasi: Array berkapasitas 3 elemen untuk barang di etalase
    array<string, 3> etalase;
    const string namaFileGudang = "gudang.txt";

public:
    // Constructor: Mengisi data awal ke etalase secara otomatis
    TokoElektronik() {
        etalase[0] = "Televisi LED 32 Inch";
        etalase[1] = "Kulkas 2 Pintu";
        etalase[2] = "Mesin Cuci Otomatis";
    }

    
