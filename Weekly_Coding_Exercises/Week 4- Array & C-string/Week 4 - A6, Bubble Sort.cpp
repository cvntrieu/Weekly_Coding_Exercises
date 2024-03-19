
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int ArraySize = 30;

int main() {

	srand(time(NULL));
	int a[ArraySize];
	for (int i = 0; i < ArraySize; i++) a[i] = rand() % 1000;
	cout << "Before Bubble Sort: " << endl;
	for (int i : a) cout << i << " ";
	cout << endl << endl;
	
	bool isSorted = false;

	for (int i = ArraySize - 1; i >= 1; i-- ) {
		for (int j = 1; j <= i; j++) {

			if (a[j - 1] > a[j]) swap(a[j], a[j - 1]);
		}
	}

	cout << "Aftet Bubble Sort: " << endl;
	for (int i : a) cout << i << " ";
	
	return 0;
}