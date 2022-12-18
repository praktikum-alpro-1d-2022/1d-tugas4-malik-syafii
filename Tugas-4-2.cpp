#include <iostream>
using namespace std;
int main() {
    string username;
    string password;
    cout << "Masukkan username: ";
    cin >> username;
    cout << "Masukkan password: ";
    cin >> password;
    
    if((username != "admin" || password != "admin123") || (username == "admin" || password == "admin123")) {
        if(username == "admin" && password == "admin123") {
            cout << "Username dan password sesuai, Login berhasil" << endl;
        }
        else if(username == "admin" && password != "admin123"){
            cout << "Username sesuai, password tidak sesuai!" << endl;
        }
        else if(username != "admin" && password == "admin123") {
            cout << "Username tidak sesuai, password sesuai" << endl;
        }
        else{
            cout << "Username dan password tidak sesuai!" << endl;
        }
    }
    return 0;
}
