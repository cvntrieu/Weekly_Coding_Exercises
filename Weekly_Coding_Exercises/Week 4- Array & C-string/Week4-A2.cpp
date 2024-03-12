
#include <iostream>
#define FOR(a,b) for (int i = a; i < b; i++)
const int n1 = 3;
const int n2 = 4;
const int n3 = 5;

using namespace std;

char a0[];
// char a1[n1] = "abcd";
// char a2[n2] = "abcd";
char test[n3];
char a3[n3] = "abcd";
char a[] = "abcd";


int main() {

	//char m0[];
	//char m1[n1] = "abcd";
	//char m2[n2] = "abcd";
	char m3[n3] = "abcd";
	char m[] = "abcd";

	/*int n0 = sizeof(a0);
	FOR(0, n0) cout << a0[i];
	cout << " ";
	cout << a0 << endl;*/    // Khong the hien thi mang a0

	FOR(0, n3) cout << test[i];
	cout << " ";
	cout << test << endl;

	FOR(0, n3) cout << a3[i];
	cout << " ";
	cout << a3 << endl;

	int n = sizeof(a);
	FOR(0, n) cout << a[i];
	cout << " ";
	cout << a << endl;

	FOR(0, n3) cout << m3[i];
	cout << " ";
	cout << m3 << endl;

	int m0 = sizeof(m);
	FOR(0, m0) cout << m[i];
	cout << " ";
	cout << m << endl;

	cout << "Size: " << n << " " << m0;

	return 0;
}