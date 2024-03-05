

#include <iostream>

using namespace std;

void drawTriangle(int n) {


	if (n < 1) {

		cout << " Invalid n! " << endl;
	}
	else if (n == 1) {

		cout << "*";
	}
	else {

		for (int i = n; i >= 1; i--) {

			string line = "*";
			int blank = n - i;

			if (i > 1) {
				for (int j = 1; j <= i - 1; j++) {
					line = "*" + line;
					line = line + "*";
				}
			}

			if ( i < n ) {
				for (int j = 1; j <= blank; j++) {
					line = " " + line;
				}
			}
			cout << line << endl;
		}
	}
}


int main() {

	int n;
	cout << "Enter n = ";
	cin >> n;
	cout << endl;

	drawTriangle(n);
	return 0;
}