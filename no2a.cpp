#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    int *pc; // pointer untuk menampung nilai dari c
    cout << "masukan angka untuk C:" << endl;
    cin >> c;
    a = 4 * (c + 3);
    cout << pc << endl;
    pc = &c; // pc adalah alamat *pc. &c adalah alamat dari c
    cout << pc << endl;
    b = 4 * (*pc + 3); // *pc adalah nilai dari c
    cout << a << endl << b << endl << c << endl << pc << endl << *pc << endl;
    return 0;
};