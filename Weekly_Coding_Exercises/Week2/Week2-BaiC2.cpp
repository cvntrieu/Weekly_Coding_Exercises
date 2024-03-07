
#include <iostream>

using namespace std;

void drawTriangle(int n) {

	for (int i = n; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			cout << "* ";
		}
		cout << endl;
	}
}


int main() {

	int n;
	cout << "Enter n = ";
	cin >> n;
	cout << endl;

	if (n <= 1) {
		cout << "Invalid n value! " << endl;
		return -1;
	}

    drawTriangle(n);
	return 0;
}