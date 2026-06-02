#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() 
{
    // Deklarasi variabel baris dan NamaFile
    string baris, NamaFile;

    // Membuat input untuk menangkap nama file
    cout << "Masukkan nama file : ";
    cin >> NamaFile;

    // Membuka file dalam mode menulis
    ofstream outfile;
    // Menunjuk ke sebuah nama file dengan ekstensi txt
    outfile.open(NamaFile + ".txt", ios::out);

    cout << ">= Menulis file, '\\q' untuk keluar" << endl;

    // Membersihkan sisa newline di buffer agar getline bekerja dengan benar
    cin >> ws; 

    // Looping untuk menulis isi file
    while (true) 
    {
        cout << "- ";
        // Mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);

        // Kondisi jika baris hanya berisi huruf \q
        if (baris == "\\q") break;

        // Menulis dan memasukkan nilai dari variabel baris ke dalam file
        outfile << baris << endl;
    }

    
