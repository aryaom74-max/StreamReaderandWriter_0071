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

    
