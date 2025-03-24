#include <iostream>

using namespace std;

int main() {
    int bilangan;

    // Meminta input dari pengguna
    cout << "Masukkan bilangan bulat: ";
    cin >> bilangan;

    // Mengecek apakah bilangan kelipatan 5 atau 10
    if (bilangan % 5 == 0 || bilangan % 10 == 0) {
        cout << bilangan << " adalah kelipatan 5 atau 10." << endl;
    } else {
        cout << bilangan << " bukan kelipatan 5 atau 10." << endl;
    }

    return 0;
}