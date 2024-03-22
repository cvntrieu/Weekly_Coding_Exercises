
#include <iostream>
#define FOR(a, b) for (int i = a; i <= b; i++)

using namespace std;

int isPrime(int n) {

	if (n < 2) return 0;
	else if (n == 2 || n == 3) return 1;
	else FOR(2, sqrt(n)) if (n % i == 0) return 0;
	return 1;
}


int main() {
	
	cout << "Input: ";
	int n;
	cin >> n;

	cout << endl << "Prime nums < n: ";
	FOR(1, n) if (isPrime(i) == 1) cout << i << " ";

	cout << endl << "Is n a prime number? ";
	cout << isPrime(n) << endl;

	return 0;
}