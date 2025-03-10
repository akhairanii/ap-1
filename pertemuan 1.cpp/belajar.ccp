#include<iostream>//header untuk c++
#include<conio.h>//header untuk fungsi getch()dan getche()
using namespace std;

int main() {

    string nama;
    char kom, jeniskelamin;
    int nim
    float ip;

    /*ini untuk komen
    beberapa baris*/

    cout<<"Hello word"<<endl;
    cout<<"Masukkan nama anda:";
    //cin>>nama;

    cout<<"Masukkan nim anda:";
    cin>>nim;

    cout<<"Masukkan kom anda:";
    cin>>kom;

    cout<<"Masukkan ip anda:";
    cin>>ip;
 
    cout<<"Masukkan jenis kelamin (L/P):";
    jeniskelamin=getche(); //agar karakter langsung tampil, tanpa tekan enter

    /*untuk output*/
    cout<<"\n"<<nama<<endl;
    cout<<nim<<endl;
    cout<<kom<<endl;
    cout<<ip<<endl;
    putchar(jenis kelamin);//untuk menampilkan karakter

    getch(); //karakter yang diketik ga ditampilkan di layar
} 