#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() 
{
    // Deklarasi variabel baris untuk menyimpan data string
    string baris;

    // Membuka file dalam mode menulis
    ofstream outfile;
    // Menunjuk ke sebuah nama file
    outfile.open("contohfile.txt");

    cout << ">= Menulis file, '\\q' untuk keluar" << endl;

    // Unlimited loop untuk menulis file
    while (true) 
    {
        cout << "- ";
        // Mendapat setiap karakter dalam satu baris
        getline(cin, baris);

        // Kondisi jika baris hanya berisi karakter \q untuk keluar
        if (baris == "\\q") break;

        // Menulis dan memasukkan nilai dari variabel baris ke dalam file
        outfile << baris << endl;
    }

    // Menutup file setelah penulisan selesai
    outfile.close();

    // Membuka file dalam mode membaca
    ifstream infile;
    // Menunjuk ke sebuah nama file
    infile.open("contohfile.txt");

    cout << endl << ">= Membuka dan membaca file" << endl;

    // Kondisi jika file ada
    if (infile.is_open()) 
    {
        // Perulangan untuk memunculkan setiap baris
        while (getline(infile, baris)) {
            cout << baris << endl;
        }
        // Menutup file jika telah selesai
        infile.close();
    }
    // Kondisi jika file tidak ada
    else {
        cout << "Unable to open file" << endl;
    }

    return 0;
}
