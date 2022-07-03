#include <iostream>

using namespace std;

int *fungsi(int *p) {
    int i, im , m = 0;  // menginisialisasi variabel i, im, dan m.
    for(i=0; i<5; i++)  // melakukan looping 5 kali.
        if (*(p+i)>m) { // mengecek apabila parameter p lebih besar daripada m.
        m = *(p+i);     // jika parameter p lebih besar daripada m, maka parameter tsb tercopy oleh m.
        im = i;         // im menyimpan index dari parameter p yang lebih besar daripada m.
    }
    return(p+im);       // alamat memorinya bergerak terhadap indexnya.
}

int main() {
    int a[] = {20, 40, 10, 50, 30}; // menginisialisasi array
    int *ptr;                       // menginisialisasi pointer
    ptr = fungsi(a);                // mengakses function fungsi(a)
    cout << " m = " << *ptr;        // menampilkan nilai dari m.
    return 0;
}