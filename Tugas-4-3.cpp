#include <iostream>
using namespace std;
 
int main(){
    int year;
    cout << "program cek tahun kabisat" << endl;
    cout << "Input tahun: ";
    cin >> year;

    if (year % 4 == 0) {
        cout << year << " adalah tahun kabisat";
    }
    else {
        cout << year << " bukan tahun kabisat";
    }
    return 0;
}
