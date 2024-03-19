
#include <iostream>
#include <string>

using namespace std;

const int maxLen = 100;


bool symmetricString(char a[maxLen]) {

	cout << "Your Cstring input: ";
	cin >> a;
	int len = strlen(a);
	cout << endl << "Is symmetric string? ";

	for (int i = 0; i < len; i++) {
		if (a[i] != a[len - 1 - i]) return false;
	}
	return true;
}


void showResult(char a[maxLen]) {

	if (symmetricString(a)) cout << "Yes" << endl;
	else cout << "No" << endl;
}


int main() {

	char a[maxLen];
	showResult(a);

	return 0;
}