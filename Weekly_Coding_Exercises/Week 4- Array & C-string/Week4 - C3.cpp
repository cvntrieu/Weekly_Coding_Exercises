
// Accepted Answer:
#include <iostream>

using namespace std;


bool palindrome(int n) {

	int tmp = n, reverse = 0;
	while (tmp > 0) {

		reverse = reverse * 10 + (tmp % 10);
		tmp /= 10;
	}

	if (reverse == n) return true;
	return false;
}


void count() {

	int t, a, b;
	int r[101] = { 0 };
	cin >> t;

	for (int i = 1; i <= t; i++) {

		cin >> a >> b;
		for (int j = a; j <= b; j++) {
			if (palindrome(j) == true) r[i]++;
		}
	}

	for (int i = 1; i <= t; i++) cout << r[i] << endl;
}


int main() {

	count();
	return 0;
}
