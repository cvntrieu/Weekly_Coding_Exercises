
#include <iostream>
const int n = 3;

using namespace std;

int main() {

// 4a)
	char a[n] = {1, 3, 4};
	cout << " a[-1] : " << static_cast <int> (a[-1]) << endl;
	cout << " a[n] : " << static_cast <int> (a[n]) << endl;
	cout << " a[n + 1] : " << static_cast <int> (a[n + 1]) << endl;
// Output: Random Value
// 4b) Not required.
// 4c)

	char arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 4; j++) {
			cout << static_cast <int> (arr[i][j]) << " ";
		}
		cout << endl;
	}
// The first 3 rows are normal. The rest 2 rows consist of Random Values.
// Physical Structures of 2-dismensions array:
//  It is determined by the continuity and position's arrangement of components in memory.
// Overstackflow can change this structure and lead to bad behaviours



	return 0;
}
