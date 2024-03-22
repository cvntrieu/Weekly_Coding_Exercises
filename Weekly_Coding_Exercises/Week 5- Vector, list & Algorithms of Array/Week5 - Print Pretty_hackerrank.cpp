
// push_back: Tao ban sao, rat can than! Nhat khi texture bi huy ma lai dung lai
// An toan hon: Con tro & Bo nho dong
#include <cmath>
#include <iomanip>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>

#define FOR(i, a, b) for(int i = a; i <= b; i++)

using namespace std;

string firstOutput(int n) {

	int tmp = n;
	string res = "";
	while (tmp > 0) {

		int digit = tmp % 16;
//		cout << "Digit = " << digit << "& tmp = " << tmp << endl;
		string hexa = "";
		if (digit >= 10) {

			switch (digit) {
			case 10: 
				hexa = "a";
				break;
			case 11:
				hexa = "b";
				break;
			case 12:
				hexa = "c";
				break;
			case 13:
				hexa = "d";
				break;
			case 14:
				hexa = "e";
				break;
			default:
				hexa = "f";
				break;
			}

			// cout << "hexa = " << hexa << endl;
			res = hexa + res;
		}
		else {

			res = to_string(digit) + res;
		}

		tmp /= 16;
	}

	res = "0x" + res;
	// cout << "res = " << res << endl;

return res;
} 


string secondOutput(double n) {

	string res;
	stringstream stream;
	double temp = round(n * 100) / 100;
	
	stream << fixed << setprecision(2) << n; 
	res = stream.str();
	res = ((n > 0) ? "+" : "") + res; // Chu y, da < 0 thi so n da mang dau "-" !!!
	
	// string final = padLeft(res); 
	return res;
}



string thirdOutput(double n) {
	 
	string res;
	stringstream stream;
	int positivePower = 0;

	while (abs(n) > 10) {
			positivePower++;
			n /= 10;
	}

	while (abs(n) < 1) {
		positivePower--;
		n *= 10;
	}


	stream << fixed << setprecision(9) << n;
	res = stream.str() + "E";

		string tmpP = to_string(positivePower);
		if (positivePower >= 0) res = res + "+" + ((positivePower < 10) ? "0" : "") + tmpP;
		else res = res + "-" + ((-positivePower < 10) ? "0" : "") + to_string(abs(positivePower));

	return res;
}



int main() {

	int q;
//	cout << "Num of tests: ";
	cin >> q;
	vector<string> a1(q);
	vector<string> a2(q);
	vector<string> a3(q);

	FOR(i, 0, q - 1) {

		int val1;
		double val, val2, val3;
//		cout << endl << "Input: " << endl;
//		cout << "First Input: ";
		cin >> val;
		val1 = static_cast<int>(val);  
// Buoc phai dung 1 bien thuc val
// Neu doc 1 so thuc vao thang val1, thi ko doc dc val2 !
//		cout << endl << "Second Input: ";
		cin >> val2;
//		cout << endl << "Final Input: ";
		cin >> val3;

		a1[i] = firstOutput(val1);
		a2[i] = secondOutput(val2);
		a3[i] = thirdOutput(val3);
	}

	FOR(i, 0, q - 1) {

//		cout << endl << "Output: " << endl;
		cout << a1[i] << endl;
		cout << setw(15) << setfill('_') << a2[i] << endl;
		cout << a3[i] << endl;
	}

	return 0;
}