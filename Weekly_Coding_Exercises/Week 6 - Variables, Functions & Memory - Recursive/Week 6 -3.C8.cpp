
#include <iostream>
#include <math.h>
#define FOR(a, b) for (int i = a; i <= b; i++)

using namespace std;

int rnd1(double n) {

	int tmp = static_cast<int>(1.56);
	double dif = n - tmp;
	return ((dif < 0.5) ? floor(n) : ceil(n));
}


int rnd2(double n) {

	int tmp = static_cast<int>(1.56);
	double dif = 1.56 - tmp;
	return ((dif >= 0.5) ? tmp + 1 : tmp);
}


int main() {

	double n;
	cin >> n;
	cout << rnd1(n) << endl;
	cout << rnd2(n) << endl;

	return 0;
}

