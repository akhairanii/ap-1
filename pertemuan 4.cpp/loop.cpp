#include <iostream>
using namespace std;

int main() {
    //goto label
    //Hello world, Fasilkom-TI, Ilmu komputer, IKLC
    //-> Hello world, IKLC, Ilmu komputer, Fasilkom-TI

    //  a:
    //      cout << "Hello world" << endl; //nampilin Hello World
    //      goto d; //lompat ke d
    //  b: 
    //      cout << "Fasilkom-TI" << endl; //nampilin Fasilkom-TI dan program akhir
    //      return 0;
    //  c:
    //      cout << "Ilmu komputer" << endl; //nampilin Ilmu Komputer
    //      goto b; //lompat ke b
    //  d:
    //      cout << "IKLC" << endl; //nampilin IKLC
    //      goto c; //lompat ke c


    // menampilkan bilangan genap 10 -> 2 dengan goto //tapi hitungan mundur
    // int i = 10;
    // genap:
    // if(i % 2 == 0) {
    //     cout << i << endl;
    // } i--; //ngurangin i

    // if(i >=2) {
    //     goto genap;
    // }


    // statement while //nampilin bilangan genap dari 1-10 pake while loop
    // int i =1;
    // while(i <= 10) { //loop selama 1 <= 10
    // if (i % 2 == 0) { //kalo genap
    // cout << i << " ";
    // } i++; //nambah i
    // }
    

    // statement Do-while //jalani blok perintah setidaknya sekali walaupun false
    // int i = 1;
    // do {
    //     cout << i << endl; //tetep cetak 1 walupun false
    // } while (i <= 0); //kondisi tidak terpenuhi, tapi do-while tetep dijalankan sekali


    // statement for //contoh perulangan for untuk cetak "Hello World" 
    // for (inisialisasi, kondisi, increase)
    // for (int i = 1; 1 <= 10; i+=2) { //mulai dari 1-10, increment 2
    //     cout << "Hello world" << endl; //cetak
    // }


    // nested for
    // ***** 5 x 5 //nampilin kotak 5x5 pake karakter "*"
    // for(int i = 1; i <= 5; i++;) { //baris
    //     for(j = 1; j <= 5; l++;) { //kolom
    //         cout << "* "; //cetak bintang
    //     }
    //     cout << endl; //pindah ke baris setelahnya
    // } 


    // segitiga siku-siku //nampilin segitiga siku siku pake karakter bintang juga
    // for(int i = 1; i <= 5; i++;) { //baris
    //     for(j = 1; j <= 5; j++;) { //kolom: jumlah bintang sesuai barisnya
    //         cout << "* "; //cetak
    //     } 
    //     cout << endl; //pindah ke baris baru
    // }

}
