#include <iostream>
#include <vector>
using namespace std;

int main() {
    //vector declaration & initialization

    vector<string> nama_karyawan = {"nisa","indah","nayla","aini","sindi"};

    // for (string karyawan : nama_karyawan){
    //     cout << karyawan << endl;
    // }

    //add data to vector
    nama_karyawan.puuh_back("dhafa");

    // for (int i = 0; i < nama_karyawan.size(); i++){
    //     cout <, nama_karyawan[i] << endl;
    // }

     //delete data from vector
     nama_karyawan.pop_back();

     nama_karyawan.erase(nama_karyawan.begin() + 3);

     for (int i = 0; i < nama_karyawan.size(); i++){
        cout <, nama_karyawan[i] << endl;
    }


}