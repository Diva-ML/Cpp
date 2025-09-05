#include <iostream>
using namespace std;

int main() {
    int absen;
    cout << "Nama = ";
    cin>> absen;

    switch (absen) {
        case 1:
        cout << "NamaSiswaAbsen1";
        break;
        case 2:
        cout << "NamaSiswaAbsen2";
        break;
        default:
        cout << "AbsenTidakTerdaftar";
    }
 return 0;   
}