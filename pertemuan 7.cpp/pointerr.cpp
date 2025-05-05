#include <iostream>
using namespace std;

void penjumlahan(int a, int b) {
    cout << a + b << endl;
}

void penjumlahanPointer(int *a, int *b) {
    *a += *b;
    cout << *a << endl;
}

void doublevalue(int *a) {
    *a *= 2;
    cout << *a << endl;
}

int main(){
    system("cls");

    // deklarasi pointer
    int number = 35;
    int *pointer_number = &number;

    // cout << "isi variabel number = " << number << endl;
    // cout << "alamat memori variabel number = " << &number << endl;
    // cout << "isi variabel pointer number = " << pointer number << endl;
    // cout << "isi variabel yang ditunjuk oleh pointer number = " << *pointer number << endl;
    // cout << "alamat memori variabel pointer_num = "<< &pointer_number << endl;
    // cout << endl;


    // pointer operation
    // *pointer_number = 25;
    // cout << "isi variabel number = " << number << endl;
    // cout << "alamat memori variabel num = " << &number << endl;
    // cout << "isi variabel pointer_num = " << pointer_number << endl;
    // cout << "isi variabel yang ditunjuk oleh pointer_number = " << *pointer_number << endl;
    // cout << "alamat memori variabel pointer_num = "<< &pointer_number << endl;
    // cout << endl;


    // pointer in Array
    int num[] = {1,2,3,4,5};
    int *pointer_num = num;
    // cout << "isi variabel number = " << num[0] << endl;
    // cout << "alamat memori variabel number = " << &num[3] << endl;
    // cout << "isi variabel pointer number = " << pointer_num << endl;
    // cout << "isi variabel yang ditunjuk oleh pointer number = " << *pointer_num << endl;
    // cout << "alamat memori variabel pointer_num = "<< &pointer_number << endl;
    // cout << endl;

    // *pointer_num += 5; // 6
    // cout << "isi variabel number = " << num[0] << endl;
    // cout << "alamat memori variabel number = " << &num[0] << endl;
    // cout << "isi variabel pointer number = " << pointer_num << endl;
    // cout << "isi variabel yang ditunjuk oleh pointer number = " << *pointer_num << endl;
    // cout << "alamat memori variabel pointer_num = "<< &pointer_num << endl;
    // cout << endl;


    //pointer in parameter
    // int num1 = 5;
    // int num2 = 7;
    // penjumlahan(num1, num2);
    // cout << num1 << endl;
    // cout << num2 << endl;
    // penjumlahanPointer(&num1, &num2);
    // cout << num1 << endl;
    // cout << num2 << endl;


    // pointer in pointer
    // int score = 4;
    // int *pointer_score = &score;
    // int **ptr_pointer_score = &pointer_score;

    // cout <<"isi variabel score " << score << " dan alamat memorinya " << &score << endl;
    // cout << "Isi variabel pointer_score " << pointer_score << " dan isi variabel yang ditunjuk oleh pointer score " << *pointer_score << " alamat memori pointer_score " << &pointer_score << endl;
    // cout << "Isi variabel ptr_pointer_score " << pointer_score << " dan isi variabel yang ditunjuk oleh ptr_pointer_score " << **ptr_pointer_score << " alamat memori ptr_score " << &ptr_pointer_score << endl;


    // dynamic pointer
    // int *ptr = new int;
    // *ptr = 30;
    // cout << "isi variabel ptr = " << *ptr << " alamat variabel ptr = " << &ptr << endl;

    // delete ptr; //deallocation
    // cout << "isi variabel ptr = " << *ptr << " alamat variabel ptr = " << &ptr << endl;

    //contoh
    // int n;
    // cout << "masukkan sebuah angka = ";
    // cin >> n;

    // doublevalue(&n);
    // cout << "nilai angka setelah dikali 2 = " << n << endl;
}
