#include <iostream>

using namespace std;

int main() {
    int a;
    cout << "masukan angka untuk a:" << endl;
    cin >> a;
    int *pa = &a; // mendeklarasikan pointer a.
    cout << "*pa = " << *pa << ", a = " << a << endl;
    cout << "masukan angka untuk merubah pointer a:" << endl;
    cin >> *pa; // mengubah value *pa menjadi 5, dan awalnya alamat pa mengikuti alamat a, dan otomatis tertarik a-nya menjadi 5 juga
    cout << "*pa = " << *pa << ", a = " << a << endl;
    return 0;
}