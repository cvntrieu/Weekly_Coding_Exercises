
#include <iostream>

using namespace std;


int search(int* a, int size, int n) {

	int low = 0, high = size - 1;

	while (low <= high) {

		int key = low + ( high - low ) / 2;
		if (*(a + key) < n) low = key + 1;
		if (*(a + key) > n) high = key - 1;
		// cout << "low, key, high = " << low << " " << key << " " << high << endl;

		if (*(a + key) == n) {
			return key + 1;
		}
	}

return -1;
}


int main() {

	int size, n;
	cout << " Size and value n = ";
	cin >> size >> n;
	int* a = new int[size];
	cout << endl << "Array: ";
	for (int i = 0; i < size; i++) cin >> *(a + i);
	cout << "Result: " << search(a, size, n) << endl;

	return 0;
}