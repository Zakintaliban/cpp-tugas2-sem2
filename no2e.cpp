// Transfer Parameter dari alamat
#include<iostream>

using namespace std;

void hitung(int a, int b, int *pc, int *pd) {
   *pc = a + b;
   *pd = a * b;
}

int main() {
    int a, b, pc, pd;
    cout << "masukan angka a:" << endl;
    cin >> a;
    cout << "masukan angka b:" << endl;
    cin >> b;
    hitung(a, b, &pc, &pd);  // kita menggunakan alamat pc & pd (&pc & &pd), tanpa perlu mengulang, cukup mengirimkan alamatnya saja
                             // dan langsung valuenya akan terisi oleh functionnya.
    cout << "a + b = " << pc << endl;
    cout << "a * b = " << pd; 
    return 0;
}

// Yang dikirim ke fungsi lain adalah alamat (l-value).
