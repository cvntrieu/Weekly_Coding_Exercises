
#include <iostream>
#include <cstring>

using namespace std;


int count(const char* c1, const char* c2) {

	int len1 = strlen(c1), len2 = strlen(c2), count = 0;
	
	for (int i = 0; i < len2 - len1 + 1; i++) {

		char* tmp = new char[len1 + 1];
		strncpy(tmp, c2 + i, len1);
		tmp[len1] = '\0';
		// cout << "i, tmp = " << i << " " << tmp << endl;
		int r = strcmp(c1, tmp);
		if (r == 0) count++;
		delete[] tmp;
	}

	return count;
}


int main() {

	char* c1 = new char[100];
	char* c2 = new char[1000];
	cout << "First Cstring: ";
	cin.getline(c1, 100);
	cout << endl << "Second Cstring to find 1st string in: ";
	cin.getline(c2, 1000);

	cout << endl << "Count: " << count(c1, c2);
	delete[] c1;
	delete[] c2;
	return 0;
}