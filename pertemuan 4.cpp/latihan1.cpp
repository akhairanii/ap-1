#include <iostream>
using namespace std;

int main() {
    string kalimat;
    int i;

    cout << "Masukkan kalimat : ";
    getline(cin, kalimat);
    
    // alya
    for(i = 0; i < kalimat.Length(); i++) {
        kalimat[i] = toupper(kalimat[i]);
    }

    cout << "Kalimat dalam huruf kapital :" << kalimat << endl;
    
    return 0;
}