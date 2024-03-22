
#include <iostream>
#define FOR(i, a, b) for (int i = a; i <= b; i++)

using namespace std;

int findGCD(int a, int b) {

	int bound = (a < b) ? a : b;
	int r = 1;
	FOR(i, 2, bound) {
		
		if ((a % i == 0) && (b % i == 0)) r = i;
	}
	return r;
}


int main() {

	int a, b;
	cout << "a, b = ";
	cin >> a >> b;
	
	int r = findGCD(a, b);
	cout << endl << " gcd(a, b) = " << r << endl;
	cout << " Are a and b coprime? " << ((r == 1) ? "Yes" : "No" ) << endl;

	return 0;
}