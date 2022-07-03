#include<iostream>

using namespace std;

void swap(int &a, int &b) { // fungsi swap menggunakan reference (alamat value)
    int temp;   // awalnya temp tidak ada value, hanya saja tipe data.
    temp = a;   // temporary mencopy value a
    a = b;      // a mencopy value b
    b = temp;   // b mencopy value temporary
}

int main() {
    int x=4, y=8;
    swap(x,y);  // terjadi function swap yang mengubah value x dan y.
    cout << x << " " << y << endl;
    
    return 0;
}