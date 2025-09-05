#include <iostream>
using namespace std;

int main() {
    float panjang, lebar, tinggi;

    cout <<"===========================" << endl;
    cout << "Nama: Ketut Diva Haryandana Putri" << endl;
    cout << "Kelas: X RPL 4" << endl;
    cout << "Absen: 22" << endl;
    cout << "NIS: 7153" << endl;
    cout << "===========================" << endl;
    cout << "Menghitung Volume Balok" << endl;
    cout << "===========================" << endl;

    // Meminta input dari pengguna untuk panjang dan lebar persegi panjang
    cout << "Masukkan panjang persegi panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar persegi panjang: ";
    cin >> lebar;

    // Menghitung luas persegi panjang
    float luasPersegiPanjang = panjang * lebar;

    // Meminta input dari pengguna untuk tinggi balok
    cout << "Masukkan tinggi balok: ";
    cin >> tinggi;

    // Menghitung volume balok
    float volumeBalok = panjang * lebar * tinggi;

    // Menampilkan hasil
    cout << "===========================" << endl;
    cout << "Luas Persegi Panjang: " << luasPersegiPanjang << endl;
    cout << "===========================" << endl;
    cout << "Volume Balok: " << volumeBalok << endl;

    return 0;
}