
#include <iostream>

using namespace std;

int main() {

	cout << "DayTab1 : " << endl;
	char daytab1[2][12] = {
  {31,28,31,30,31,30,31,31,30,31,30,31},
  {31,29,31,30,31,30,31,31,30,31,30,31}
	};
	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 12; j++) {
			cout << daytab1[i][j];
		}
		cout << endl;
	}

  char daytab1Testb[2][12] = {
  {31,28,31,30,31,30},
  {31,29,31,30,31,30}
	};
  
   cout << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 12; j++) {
			cout << daytab1[i][j];
		}
		cout << endl;
	}

	char daytab1TestC1[][12] = {
  {31,28,31,30,31,30,31,31,30,31,30,31},
  {31,29,31,30,31,30,31,31,30,31,30,31}
	};

	// int c1 = sizeof(daytab1TestC1);
	cout << endl;
	for ( char* x : daytab1TestC1) {
		for (int j = 0; j < 12; j++) {
			cout << x[j];
		}
		cout << endl;
	}

	char daytab1TestC2[2][] = {
  {31,28,31,30,31,30,31,31,30,31,30,31},
  {31,29,31,30,31,30,31,31,30,31,30,31}
	};

	int c2 = sizeof(daytab1TestC2);
	cout << endl;
	for (char* x : daytab1TestC2) {
		for (int y : &x) {
			cout << ;
		}
		cout << endl;
	}

	return 0;
}