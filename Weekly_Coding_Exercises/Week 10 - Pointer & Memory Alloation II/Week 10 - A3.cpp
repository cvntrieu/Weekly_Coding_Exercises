
#include <iostream>

using namespace std;

int main() {

	char* a = new char[10];
	char* c = a + 3; // Mang lay tu a[3] tro di
	for (int i = 0; i < 9; i++) a[i] = 'a';
	a[9] = '\0';     
	cerr << "a: " << "-" << a << "-" << endl;
	cerr << "c: " << "-" << c << "-" << endl;
	delete c;
	cerr << "a after deleting c:" << "-" << a << "-" << endl;

	// c dang tro toi 1 phan cua xau ki tu a ( tinh tu a[3] )
	// Giai phong c ( tuc giai phong 1 phan xau a ban dau )
	// => Van co tinh in ra a da bi giai phong 1 lan, SAI!

	return 0;
}