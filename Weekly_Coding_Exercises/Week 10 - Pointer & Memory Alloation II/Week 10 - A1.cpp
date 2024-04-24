
#include <iostream>
#define FOR(i, a, b) for(int i = a; i <= b; i++)

using namespace std;

char* concat(const char* a, const char* b) {

	int la = strlen(a), lb = strlen(b);
	char* r = new char[la + lb + 1];

	strcpy(r, a);
	strcat(r, b);
	puts(r);

	return r;
}


int main() {

	char* res = concat("Hello", " World");
	return 0;
}