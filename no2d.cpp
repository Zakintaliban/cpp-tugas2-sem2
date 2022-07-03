// Transfer Parameter dari value
#include <iostream>
using namespace std;

void line(char a);

int angka;

int main() {
    cout << "masukan angka" << endl;
    cin >> angka;
   char bintang = '*';
   line( bintang );
   
   return 0;
}

void line(char a) {
   int i;
   for(i=1; i<=angka; i++) 
	    cout << a;
}

// Yang dikirim ke fungsi lain adalah nilaidata (r-value).