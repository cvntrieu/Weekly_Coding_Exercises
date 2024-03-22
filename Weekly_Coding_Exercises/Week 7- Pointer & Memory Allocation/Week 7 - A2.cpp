
#include <iostream>

using namespace std;

void f1(int a[])  { cout << "f1: " << sizeof(a) << endl; }

void f2(int a[3]) { cout << "f2: " << sizeof(a) << endl; }

int main() {

	int a[3] = { 1, 2, 3 };
	cout << "In main: " << sizeof(a) << endl; // 12
	f1(a); // 8
	f2(a); // 8
	
	return 0;
}