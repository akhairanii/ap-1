#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

int main() {
    string mantra;
    cout << "Masukkan mantra: ";
    getline(cin, mantra);

    int i = 0;
    int jumlahVokal = 0;

    // Proses menghitung huruf vokal dengan do-while
    if (mantra.length() > 0) {
        do {
            char huruf = tolower(mantra[i]);
            if (huruf == 'a' || huruf == 'i' || huruf == 'u' || huruf == 'e' || huruf == 'o') {
                jumlahVokal++;
            }
            i++;
        } while (i < mantra.length());
    }

    if (jumlahVokal > 0) {
        cout << "Kekuatan mantra: " << jumlahVokal << " vokal" << endl;
    } else {
        cout << "Mantra tidak valid! Tidak mengandung vokal." << endl;
    }

    return 0;
}