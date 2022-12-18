#include <iostream>
using namespace std;
int main() {
    int a;
    cout << "          Menu Restaurant Mc'Yahud" << endl;
    cout << "=========================================="<< endl;
    cout << "1.Nasi Goreng Informatika      Rp. 5.000,-"<< endl;
    cout << "2.Nasi Soto Ayam Internet      Rp. 7.000,-"<< endl;
    cout << "3.Gado-gado Disket             Rp. 4.500,-"<< endl;
    cout << "4.Bubur Ayam LAN               Rp. 4.000,-"<< endl;
    cout << "=========================================="<< endl;
    cout << "Masukkan Pilihan Anda... :";
    cin >> a;
    switch (a){
        case 1:
            cout << "Pilihan No.1 Nasi Goreng Informatika      Rp. 5.000,-";
            break;
        case 2:
            cout << "Pilihan No.2 Nasi Soto Ayam Internet      Rp. 7.000,-";
            break;
        case 3:
            cout << "Pilihan No.3 Gado-gado Disket             Rp. 4.500,-";
            break;
        case 4:
            cout << "Pilihan No.4 Bubur Ayam LAN               Rp. 4.000,-";
            break;
        default:
            cout << "Maaf menu yang anda masukkan tidak ada";
    }
    return 0;
}