
#include <iostream>

using namespace std;

struct Address {

	string street;
	int number;
	
	Address() {}

	Address(string _street, int _number) {
		street = _street;
		number = _number;
	}
};


int main() {

	int x = 7, y = 45, z = 63, num;

	if (x < z) num = x;

	else num = z;

	if (y < z) num = y;

	else num = z;
	cout << num;
}