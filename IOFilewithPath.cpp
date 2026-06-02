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

    // Menutup file apabila telah selesai di tulis
    outfile.close();

    // Membuka file dalam mode membaca
    ifstream infile;
    // Menunjuk ke sebuah file dengan ekstensi .txt
    infile.open(NamaFile + ".txt", ios::in);

    cout << endl << ">= Membuka dan membaca file" << endl;

    // Kondisi jika file ada
    if (infile.is_open()) 
    {
        // Perulangan untuk menampilkan setiap baris
        while (getline(infile, baris)) 
        {
            cout << baris << endl;
        }
        // Menutup file jika telah selesai di loop
        infile.close();
    }
    // Kondisi jika file tidak ada
    else {
        cout << "Unable to open file" << endl;
    }

    return 0;
}
