#include <iostream>

using namespace std;

int main() {
    int a, b;
    int *pa, *pb;
    cout << "masukan untuk value a" << endl;
    cin >> a;
    pa = &a; // alamat pointer a mengcopy alamat a.
    b = *pa; // b mengcopy value pointer a.
    pb = &b; // alamat pointer b mengcopy alamat b.

// value tetap sama, tetapi alamat bakal berbeda. karena yang diambil adalah value dari a, bukan alamat dari a dan diambil oleh b.

    cout << a << " " << &a << " " << pa << " " << *pa << endl;
    cout << b << " " << &b << " " << pb << " " << *pb << endl; 
    return 0;
}