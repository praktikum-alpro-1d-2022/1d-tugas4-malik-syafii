#include <iostream>
using namespace std;

int main(){
    cout << "================================================\n";
    cout << "| Kode |   Nama   |  Ukuran    |    Harga      |\n";
    cout << "| Susu |  Produk  |            |               |\n";
    cout << "------------------------------------------------\n";
    cout << "|      |          | B = Besar  | Rp. 10.000,-  |\n";
    cout << "|  1   |  Dancow  | S = Sedang | Rp.  4.250,-  |\n";
    cout << "|      |          | K = Kecil  | Rp.  2.100,-  |\n";
    cout << "------------------------------------------------\n";
    cout << "|      |          | B = Besar  | Rp.  8.500,-  |\n";
    cout << "|  2   | Indomilk | S = Sedang | Rp.  4.000,-  |\n";
    cout << "|      |          | K = Kecil  | Rp.  2.025,-  |\n";
    cout << "-----------------------------------------------\n";
    cout << "|      |          | B = Besar  | Rp. 17.000,-  |\n";
    cout << "|  3   | Sustacal | S = Sedang | Rp. 14.500,-  |\n";
    cout << "|      |          | K = Kecil  | Rp.  8.300,-  |\n";
    cout << "================================================\n";

    int a;
    string c;
    float b,e,d;
    cout << "Masukkan Kode Susu (1-3) : ";
    cin >> a;
    switch (a){
        case 1: //Dancow
            cout << "Masukkan Jumlah Pembelian : ";
            cin >> b;
            if (b >= 0){
                cout << "Masukkan Ukuran (B/S/K) : ";
                cin >> c;
                if (c == "B"){
                    d=10000;
                }
                else if(c == "S"){
                    d=4250;
                }
                else if(c == "K"){
                    d=2100;
                }
                else{
                    cout << "Input salah" << endl;
                }
                e=b*d;
                cout << "Susu Dancow" << endl;
                cout << "Harga Susu Rp. " << d << endl;
                cout << "Jumlah Pembelian Rp. " << e;
            }
            else{
                cout << "Input salah" << endl;
            }
            break;

        case 2: //Indomilk
            cout << "Masukkan Jumlah Pembelian : ";
            cin >> b;
            if (b >= 0){
                cout << "Masukkan Ukuran (B/S/K) : ";
                cin >> c;
                if (c == "B"){
                    d=8500;
                }
                else if(c == "S"){
                    d=4000;
                }
                else if(c == "K"){
                    d=2025;
                }
                else{
                    cout << "Input salah" << endl;
                }
                e=b*d;
                cout << "Susu Dancow" << endl;
                cout << "Harga Susu Rp. " << d << endl;
                cout << "Jumlah Pembelian Rp. " << e;
            }
            else{
                cout << "Input salah" << endl;
            }
            break;

        case 3: //Sustacal
            cout << "Masukkan Jumlah Pembelian : ";
            cin >> b;
            if (b >= 0){
                cout << "Masukkan Ukuran (B/S/K) : ";
                cin >> c;
                if (c == "B"){
                    d=17000;
                }
                else if(c == "S"){
                    d=14500;
                }
                else if(c == "K"){
                    d=8300;
                }
                else{
                    cout << "Input salah" << endl;
                }
                e=b*d;
                cout << "Susu Dancow" << endl;
                cout << "Harga Susu Rp. " << d << endl;
                cout << "Jumlah Pembelian Rp. " << e;
            }
            else{
                cout << "Input salah" << endl;
            }
            break;

        default:
            cout << "Maaf menu yang anda masukkan tidak ada";
    }
    
    return 0;
}