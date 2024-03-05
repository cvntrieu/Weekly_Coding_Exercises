
#include <iostream>

using namespace std;

int main() {

	int value = 0, prev = 0;

	while (value >= 0) {

		cin >> value;
		if (value == prev) continue;
		cout << value << " ";
		prev = value;
	}

	return 0;
}