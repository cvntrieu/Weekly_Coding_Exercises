
#include <iostream>

using namespace std;

void triple1(int n) { 

	cout << "1. &n = " << &n << endl;
	n *= 3;
}

void triple2(int& n) {

	cout << "2. &n = " << &n << endl;
	n *= 3;
}

int main() {

	int m = 5;
	cout << "&m = " << &m << endl;
	triple1(m);
	triple2(m);

	//    &m = 00000082AD7FF9B4
	// 1. &n = 00000082AD7FF990 (Tham tri)
	// 2. &n = 00000082AD7FF9B4 ( = &m - Tham bien )

	return 0;
}