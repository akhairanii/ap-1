#include <iostream>
using namespace std;

int main() {
    string nama = "Annisa";
    string nim = "241401022";

    string matkul1 = "Algoritma dan Pemrograman";
    string matkul2 = "Probabilitas dan Statistika";
    string matkul3 = "Sistem Operasi";

    int nilai1 = 70;
    int nilai2 = 87;
    int nilai3 = 35;

    cout << "Nama Mahasiswa: " << nama << endl;
    cout << "NIM: " << nim << endl << endl;

    // Cek kelulusan masing-masing mata kuliah
    cout << matkul1 << ": " << (nilai1 >= 60 ? "Lulus." : "Tidak Lulus. Silakan Ulangi di Tahun Depan!") << endl;
    cout << matkul2 << ": " << (nilai2 >= 60 ? "Lulus." : "Tidak Lulus. Silakan Ulangi di Tahun Depan!") << endl;
    cout << matkul3 << ": " << (nilai3 >= 60 ? "Lulus." : "Tidak Lulus. Silakan Ulangi di Tahun Depan!") << endl;

    // Hitung rata-rata
    int rataRata = (nilai1 + nilai2 + nilai3) / 3;
    cout << "\nNilai Rata-rata Semester ini: " << rataRata << endl;

    return 0;
}