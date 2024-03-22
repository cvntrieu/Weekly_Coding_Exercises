
#include <iostream>
#include <math.h>
#include <cstdlib>
#include <ctime>

#define FOR(i, a, b) for (int i = a; i <= b; i++)

using namespace std;

void show(int a[], int n) {

	srand(time(nullptr));
	FOR(i, 0, n - 1) a[i] = rand() % 50;

	FOR(i, 0, n - 3) {
		FOR(j, i + 1, n - 2) {
			FOR(k, j + 1, n - 1) {
				
				if ((a[i] + a[j] + a[k]) % 25 == 0)
					cout << i << " " << j << " " << k << " " << endl;
			}
		}
	}
}


int main() {

	int n;
	cout << "Number of elements: ";
	cin >> n;
	cout << endl << "Result: " << endl;

	int a[1000];
	show(a, n);

	return 0;
}