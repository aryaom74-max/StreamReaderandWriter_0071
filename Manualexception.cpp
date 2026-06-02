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
    
