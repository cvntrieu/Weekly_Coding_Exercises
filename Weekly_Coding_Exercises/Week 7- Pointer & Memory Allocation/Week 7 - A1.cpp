
#include <iostream>

using namespace std;


// Dangling references
int* sumPtr(int a, int b) {

	int c = a + b;
	c = a + b;
	return &c;
}


int main() {

	// Con tro chua khoi tao
	int* px;
	// cout << px << " " << *px << endl; // Ko chay dc

	// Truy nhap con tro null
	px = nullptr;
	cout << px << " " << *px << endl;

	int a = 0, b = 1;
	cout << sumPtr(a, b) << endl;

	const int* aPtr = &a;
	// *aPtr += 1; // const ptr

	// Giai phong bo nho qua som
	int* p = new int(10);
	int* pPtr = p;
	delete p;
	cout << *pPtr << endl;
	
	return 0;
}