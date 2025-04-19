#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string biner;
    cout << "Input kode biner : ";
    cin >> biner;

    // Validasi apakah hanya terdiri dari 0 dan 1
    for (char digit : biner) {
        if (digit != '0' && digit != '1') {
            cout << "Pesan Rusak!" << endl;
            return 0;
        }
    }

    // Konversi biner ke desimal secara manual
    int desimal = 0;
    int panjang = biner.length();

    for (int i = 0; i < panjang; i++) {
        if (biner[i] == '1') {
            desimal += pow(2, panjang - i - 1);
        }
    }

    cout << "Angka desimal dari biner " << biner << " adalah = " << desimal << endl;

    return 0;
}