#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main() {
    int a = 5;                                      //nilai/value yang keluar dari a
    cout << "alamat variable a: " << &a << endl;    //alamat dari a
    cout << "a: " << a << endl;
    
    int *pa;                                        //membuat pointer dengan nama pa
    *pa = 7;                                        //nilai/value yang keluar dari *pa
    cout << "alamat variable pa: " << pa << endl;   // memunculkan alamat yang keluar dari pa
    cout << "*pa: " << *pa << endl;                 // memunculkan nilai/value yang keluar dari *pa
    
    pa = &a;                                        // alamat pa mengcopy alamat a (mengcopy alamat, value akan terikut berubah.)
    cout << "alamat variable pa: " << pa << endl;   // memunculkan alamat terbaru dari pa yang mengambil dari a
    cout << "*pa: " << *pa << endl;                 // memunculkan value terbaru dari pa yang mengambil dari a
    
    *pa = 10;
    cout << "alamat variable a: " << &a << endl;    // memunculkan alamat yang keluar dari a 
                                                    // (masih sama, karena alamat pa meng-copy alamat a)
    cout << "a: " << a << endl;                     // memunculkan value yang keluar dari a (dimana terubah valuenya)
    
    getch();
    return 0;
};