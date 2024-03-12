
#include <iostream>
#define FOR(a, b) for ( int i = a; i < b; i++ )
const int n = 5;

using namespace std;


int a[n];
int ar[n] = { 1, 2, 3, 4 };
int arr[] = { 1, 2, 3, 4 };


int main() {

	int m1[n];
	int m2[n] = { 1, 2, 3, 4 };
	int m3[] = { 1, 2, 3, 4 };

	FOR(0, n) cout << a[i] << " ";
	cout << endl;

	FOR(0, n) cout << ar[i] << " ";
	cout << endl;

	int num = sizeof(arr) / sizeof(arr[0]);
	FOR(0, num) cout << arr[i] << " ";
	cout << endl;

	/*FOR(0, n) cout << m1[i] << " ";
	cout << endl;*/

	FOR(0, n) cout << m2[i] << " ";
	cout << endl;

	int newNum = sizeof(arr) / sizeof(arr[0]);
	FOR(0, newNum) cout << m3[i] << " ";
	cout << endl;

	return 0;
}