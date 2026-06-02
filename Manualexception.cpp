#include <iostream>
using namespace std;

int main() 
{
    // Membuat isi dari try untuk pengujian error
    try 
    {
        cout << "Selamat belajar di prodi TI UMY" << endl;
        
        // Membuka comment throw agar exception dapat diuji. 
        // Dilemparkan nilai integer (0) agar masuk ke blok catch(int a)
        throw 0; 
        
        cout << "Pernyataan tidak akan ditampilkan" << endl;
    }
    // Kondisi jika throw yang bertipe data integer
    catch (int a) 
    {
        cout << "Pengecualian akan di eksekusi (Tipe: Integer)" << endl;
    }
    // Kondisi jika throw bertipe data selain integer
    catch (...) 
    {
        cout << "default pengecualian diekssekusi" << endl;
    }

    return 0;
}
