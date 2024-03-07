
#include <iostream>

using namespace std;

bool isPrime(int x) {

	if (x < 2) {
		return false;
	}
	else if (x == 2 || x == 3) {
		return true;
	}
	else {

		for (int i = 2; i <= sqrt(x); i++) {
			if (x % i == 0) return false;
		}
	}

	return true;
}

int main() {

	int x;
	cout << " Enter an integer: " << endl;
	cin >> x;
	cout << boolalpha << isPrime(x) << endl;

	return 0;
}