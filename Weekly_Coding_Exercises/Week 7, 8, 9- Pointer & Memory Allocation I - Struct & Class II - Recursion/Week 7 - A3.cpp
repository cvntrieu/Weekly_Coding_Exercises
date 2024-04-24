
#include <iostream>
#define FOR(a, b) for (int i = a; i < b; i++ )

using namespace std;

int count_even(int* a, int n) {

	int cnt = 0;
	FOR(0, n) if (a[i] % 2 == 0) cnt++;
	return cnt;
}

int main() {

	int a[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << "First 5 elements: " << count_even(a, 5) << endl;
	cout << "Last 5 elements:  " << count_even(a + 5, 5) << endl;

	return 0;
}