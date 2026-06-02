#include <iostream>
#include <exception>
#include <array>

using namespace std;

int main() 
{
    cout << "Awal program" << endl; // penanda 1
    
    try 
    {
        // Deklarasi array data dengan panjang index 3
        array<int, 3> data = { 1, 2, 3 };
        
        // Memanggil array element ke-5 yang berarti akan terjadi error out of range
        cout << data.at(5) << endl;
    }
    // Kondisi jika terjadi error didalam try
    catch (exception& e) 
    {
        // Menampilkan pesan error bawaan dari sistem
        cout << e.what() << endl;
    }

    cout << "Baris program terakhir" << endl; // penanda 2
    return 0;
}