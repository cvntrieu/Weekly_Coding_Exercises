
#include <iostream>

using namespace std;

const int n = 10000;

bool findEqualPair(int a[n]) {

	cout << "Find Equal Pair Program: Enter your input with 10000 positive integers <= 10000: " << endl;
	for (int i = 1; i < n; i++) cin >> a[i];
	cout << "Show result: ";

	for (int i = 1; i < n; i++) {
		for (int j = 0; j <= i - 1; j++) {
			if (a[i] == a[j]) return true;
		}
	}
return false;
}


void showResult(int a[n]) {

	if (findEqualPair(a)) cout << "Yes" << endl;
	else cout << "No" << endl;
}

int main() {

	int a[n];
	showResult(a);

	return 0;
}