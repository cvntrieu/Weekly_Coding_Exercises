
#include <iostream>
#include <cstring>
#include <string>

using namespace std;

struct String {

	int n; 
	char* str;

	String(const char* ch) {

		n = strlen(ch) + 1; // Chieu dai + '\0'
		str = new char[n];
		strncpy_s(str, n, ch, n);
	}

	~String() {
		delete[] str;
	}

	void print() {
		cout << str;
	}

	void append(const char* add) {

		int len = strlen(add);
		char* tmp = new char[n + len];

		strncpy_s(tmp, n + len, str, n);
		strncat_s(tmp, n + len, add, len);
		delete[] str; // Giai phong bo nho cap truoc do
		str = tmp; // Tro den vung nho moi
		n = n + len;
	}
};


int main() {

	String greeting("Hi");
    greeting.append(" there");
	greeting.print();

	return 0;
}

