
#include <iostream>

using namespace std;

const int n = 5;

int main() {

	char str[n];
	cout << "Enter your string: ";
	cin.getline(str, n);

	cout << endl << "_" << str << "_" << endl;

// Input < n characters: Fine!
//  For example: Input = abc (n = 5) => Output = _abc_
// Input = n characters: The final character is removed
// 	For example: Input = abcde (n = 5) => Output: _abcd_ | 'e', to be the last character, is removed!
// Input > n characters: Output only show the first n - 1 characters
//  For example: Input = abcdef (n = 5) => Output: _abcd_ | Show only first 4 characters: a, b, c, d. The last ones are removed!

	return 0;
}