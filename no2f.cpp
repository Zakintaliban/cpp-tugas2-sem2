#include<iostream>

using namespace std;

int f1(int u, int v) {
	u=0; v=0;
	cout << "Di dalam f1: u = " << u << " v = " << v << "\n";
	return 0;
}

int f2(int *pu, int *pv) {
	*pu=0; *pv=0;
	cout << "Di dalam f2: *pu = " << *pu << ", *pv = " << *pv << "\n";
	return 0;
}

int main() {
	int u=1, v=3;
	
	cout << "Sebelum panggil fungsi f1: u = " << u << ", v = " << v << "\n";
    // Sebelum panggil fungsi f1: u = 1, v = 3
	f1(u,v);
    // Di dalam f1: u = 0 v = 0
	cout << "Sesudah panggil fungsi f1: u = " << u << ", v = " << v << "\n";
    // Sesudah panggil fungsi f1: u = 1, v = 3
	cout << "Sebelum panggil fungsi f2: u = " << u << ", v = " << v << "\n"; 	
    // Sebelum panggil fungsi f2: u = 1, v = 3
	f2(&u,&v);
    // Di dalam f2: *pu = 0, *pv = 0
    // dia tetap bakal mengambil value 0, dikarenakan yang diambil adalah value dari pu & pv, bukan alamat dari pu & pv.	
	cout << "Sesudah panggil fungsi f2: u = " << u << ", v = " << v;
    // Sesudah panggil fungsi f2: u = 0, v = 0
	
	return 0;
}
