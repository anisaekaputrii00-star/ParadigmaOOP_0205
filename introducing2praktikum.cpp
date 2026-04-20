#include <iostream>
using namespace std;

class Barang{
public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

    void spesifikasi() 
    {
        cout << "Nama : " << nama << endl;
        cout << "Jumlah : " << jumlah << endl;
        cout << "Kategori : " << kategori << endl;
        cout << "tanggalProduksi: " << tanggalProduksi << endl;
    }
};

int main(){
    Barang eloktronik;
    elektronik.nama = "Televisi";
    elektronik.jumlah = 7;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "11-12-2022";

    elektronik.spesifikasi();
    
    Barang noneloktronik;
    nonelektronik.nama = "pensil";
    nonelektronik.jumlah= 4;
    nonelektronik.kategori= "NonElektronik";
    nonelektronik.tanggalProduksi = "03-08-2025";

    nonelektronik.spesifikasi();
}