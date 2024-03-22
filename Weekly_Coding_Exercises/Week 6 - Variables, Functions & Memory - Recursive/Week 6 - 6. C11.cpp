
#include <iostream>
#include <string>

using namespace std;

string binary(int n) {

	string res = "";
	int tmp = n; // Ko dc xu ly tren tham so n ma phai thong qua bien tmp
	while (tmp > 0) {

		int digit = tmp % 2;
		res = to_string(digit) + res;
		tmp /= 2;
	}

	return res;
}


int decimal(string s) {

	int res = 0, len = 0;
	char v[100];

	for (char ch : s) {
		
		v[len] = ch;
		len++;
	}

	len--;
	int j = len;

	for (int i = 0; i <= len; i++) {

		int digit = (int)v[i] - 48;
		res = res + digit * pow(2, j);
		j--;
	}

	return res;
}


int main() {

	int n;
	string s;
	cout << "Input of Decimal -> Binary: ";
	cin >> n;
	cout << endl << "Input of Binary -> Decimal: ";
	cin >> s;

	cout << endl << "Binary Result: " << binary(n) << endl 
		         << "Decimal Result: " << decimal(s) << endl;

	return 0;
}