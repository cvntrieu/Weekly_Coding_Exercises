
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int randomNumber(int n) { 
	
	srand(time(nullptr));
	return (rand() % n); 
}

int main() {

	int n;
	cin >> n;
	cout << randomNumber(n);
	return 0;
}