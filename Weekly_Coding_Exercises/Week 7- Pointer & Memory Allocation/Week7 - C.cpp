
#include <iostream>
#define FOR(i, a, b) for (int i = a; i <= b; i++)

using namespace std;


/*
Note:
	char c[6] = "Hello";				 // 0 -> 4 + (5)
    cout << strlen(c) << endl;			 // 5
    cout << c[4] << " " << c[5] << endl; // o, /0
*/


int strlen(char* a) { 

	int l = 0;
	char* pa = a;
	while (*pa != '\0') {
		l++;
		pa++;
	}
	return l; 
}


char* strcpy(char* a) {

	int l = strlen(a);
	char* c = new char[l + 1];
	char* pc = c;
	char* pa = a;

	while ( *pa != '\0') {
		*pc = *pa;
		pa++;
		pc++;
	}

	*pc = '\0';
	return c;
}


char* reverse(char* a) {

	int l = strlen(a); 
	char* r = new char[l + 1]; // Cap phat dong, ko bi dangling references
	char* pa = a;
	char* pr = r + l;
	*pr = '\0';
	pr--;
	
	while (*pa != '\0') {

		*pr = *pa;
		pa++;
		pr--;
	}

	return r;
}


char* delete_char(char* a, char c) {

	int l = strlen(a);
	char* r = new char[l + 1];
	char* pr = r;
	char* pa = a;

	FOR(i, 0, l - 1) {
		
		if (*pa != c) {
			*pr = *pa;
			pr++; // pr luon tro phan tu ke tiep
		}
		pa++;
	}

	*pr = '\0'; // Phai gan truc tiep
	return r;
}



char* pad_right(char* a, int n) {

	int l = strlen(a);
	int max = (l < n) ? n : l;
	char* r = new char[max + 1];
	r = strcpy(a);

	if (l < n) {

		FOR(i, l, n - 1) *(r + i) = '_';
		*(r + n) = '\0'; // !!!
	}

	return r;
}


char* pad_left(char* a, int n) {

	int l = strlen(a);
	int max = (l < n) ? n : l;
	char* r = new char[max + 1];
    r = strcpy(a);

	if (l < n) {

		int dif = n - l;
		for (int i = n - 1; i >= dif; i--) *(r + i) = *(r + i - dif);
		*(r + n) = '\0'; // !!!
		FOR (j, 0, dif - 1) *(r + j) = '_';
	}

	return r;
}


char* truncate(char* a, int n) {

	char* r = new char[n + 1];
	char* pr = r;
	char* pa = a;
	int l = strlen(a);

	if (l <= n) {
		r = strcpy(a);
	}
	else {

		FOR(i, 0, n - 1) *(pr + i) = *(pa + i);
		*(r + n) = '\0';
	}
	return r;
}


bool is_palindrome( char* a ) {

	int l = strlen(a);
	char* pa = a;
	FOR(i, 0, l / 2) if (*(pa + i) != *(pa + l - 1 - i)) return false;
	return true;
}


char* trim_left(char* a) {

	int l = strlen(a);
	char* r = new char[l + 1];
	char* s = a;
	char* p = r;
	char* pa = a + l;

	while ((s <= pa) && (*s == ' ' || *s == '\t')) {

		s++;
		l--;
	}

	while (s <= pa) {

		*p = *s;
		p++;
		s++;
	}

	*(r + l) = '\0';
	return r;
}


char* trim_right(char* a) {

	int l = strlen(a);
	char* r = new char[l + 1];
	r = strcpy(a);
	char* e = r + l - 1; 

	while ((e >= a) && (*e == ' ' || *e == '\t')) e--; // Loai bo ca ki tu cach va ki tu tab
	*(e + 1) = '\0';
	return r;
}


int main() {

	char c;
	int pr, pl, t;
	cout << " Char to be deleted: ";
	cin >> c;
	cout << " Pad right length: ";
	cin >> pr;
	cout << " Pad left length: ";
	cin >> pl;
	cout << "Length after being truncated: ";
	cin >> t;

	char a[20] = "     Hello guy     ";
	char* r1 = reverse(a);
	char* r2 = delete_char(a, c);
	char* r3 = pad_right(a, pr);
	char* r4 = pad_left(a, pl);
	char* r5 = truncate(a, t);
	bool r6 = is_palindrome(a);
	char* r7 = trim_right(a);
	char* r8 = trim_left(a);

	cout << "Reverse:" << r1 << endl;
	cout << "Delete_char:" << r2 << endl;
	cout << "Pad right: " << r3 << endl;
	cout << "Pad left: " << r4 << endl;
	cout << "Truncate: " << r5 << endl;
	cout << "is palindrome? " << boolalpha << r6 << endl;
	cout << "Trim right: " << r7 << endl;
	cout << "Trim left: " << r8 << endl;

	return 0;
}