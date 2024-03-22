
#include <iostream>

using namespace std;

void foo(string s) {
	
	cout << " Foo: &s = " << &s << endl;
	s.pop_back();
}

void goo(int a[]) {

	cout << " Goo: &a = " << &a << endl;
	a[0] += 3;
}


int main() {

	string name = "Charlie";
	int b[3] = { 0, 1, 2 };

	foo(name);
	goo(b);

	cout << "name = " << name << endl
		<< " b[0] = " << b[0] << endl;
// name va b[0] van giu nguyen, vay la pass-by-value
	return 0;
}