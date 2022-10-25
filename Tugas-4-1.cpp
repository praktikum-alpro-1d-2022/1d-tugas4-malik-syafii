#include <iostream>
using namespace std;
int main() {
    int a,a1;
    cout << " Masukkan bilangan : "<<endl;
    cin >> a;
    a1=a;
    a=a%2;
    if(a==0){
        cout << a1 << " adalah bilangan genap";
    }else{
        cout << a1 << " adalah bilangan ganjil";
    }
    return 0;
}
