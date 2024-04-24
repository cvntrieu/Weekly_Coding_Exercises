
#include <iostream>

using namespace std;

int main() {

	int c = 69;
	int* p =  new int (c);
	delete p;
	cout << *p << endl;
	// Chuong trinh khong in ra gia tri p tro toi nhu mong muon
	// Do p da duoc giai phong

	return 0;
}