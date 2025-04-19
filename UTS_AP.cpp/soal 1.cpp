#include <iostream>
using namespace std;

bool isPangkatDua(int n) {
    if (n <= 0) return false;
    while (n % 2 == 0) {
        n = n / 2;
    }
    return (n == 1);
}

int main() {
    int kode;
    cout << "kode : ";
    cin >> kode;

    if (isPangkatDua(kode)) {
        cout << "ya" << endl;
    } else {
        cout << "bukan" << endl;
    }

    return 0;
}