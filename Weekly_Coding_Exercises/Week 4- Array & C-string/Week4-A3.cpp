
#include <iostream>

using namespace std;

int main() {

// Cach 1: =============================================
	cout << "DayTab1 : " << endl;
	char daytab1[2][12] = {
  {31,28,31,30,31,30,31,31,30,31,30,31},
  {31,29,31,30,31,30,31,31,30,31,30,31}
	};
	
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 12; j++) {
			cout << static_cast<int> (daytab1[i][j]) << " ";
// in giá tri cua mot bien kieu char bang cout, nó se in ra ký tu tuong ung !
// => không phai giá tri so nguyên thuc su -> Phai ép kieu
// Nên dùng static_cast hon là ép kieu truc tiep
		}
		cout << endl;
	}


  char daytab1B[2][12] = {
  {31,28,31,30,31,30},
  {31,29,31,30,31,30}
	};
  
   cout << endl;
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 12; j++) {
			cout << static_cast<int> (daytab1B[i][j]) << " ";
		}
		cout << endl;
	}


	char daytab1C1[][12] = {
  {31,28,31,30,31,30,31,31,30,31,30,31},
  {31,29,31,30,31,30,31,31,30,31,30,31}
	};

	cout << endl;
	for ( char* x : daytab1C1) { // x <=> array
		for (int j = 0; j < 12; j++) {
			cout << static_cast<int> (x[j]) << " ";
		}
		cout << endl;
	}

// The below array declaration is not allowed (Syntax Error):
	//char daytab1C2[2][] = {
    // {31,28,31,30,31,30,31,31,30,31,30,31},
    // {31,29,31,30,31,30,31,31,30,31,30,31}
	//};

	/*char daytab1C3[][] = {
  {31,28,31,30,31,30,31,31,30,31,30,31},
  {31,29,31,30,31,30,31,31,30,31,30,31}
	};*/


// Cach 2: =============================================
	cout << endl << "DayTab2" << endl;
	char daytab2[2][12] = {
  31,28,31,30,31,30,31,31,30,31,30,31,
  31,29,31,30,31,30,31,31,30,31,30,31
	};

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 12; j++) {
			cout << static_cast<int> (daytab2[i][j]) << " ";
		}
		cout << endl;
	}
	cout << endl;


	char daytab2B[2][12] = {
  31,28,31,30,31,30,31,
  31,29,31,30,31,30,31
	};

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 12; j++) {
			cout << static_cast<int> (daytab2B[i][j]) << " ";
		}
		cout << endl;
	}
	cout << endl;


	char daytab2C1[][12] = {
  31,28,31,30,31,30,31,31,30,31,30,31,
  31,29,31,30,31,30,31,31,30,31,30,31
	};

	for (char* x : daytab2C1) { 
		for (int j = 0; j < 12; j++) {
			cout << static_cast<int> (x[j]) << " ";
		}
		cout << endl;
	}
	cout << endl;

// Error:
	/*char daytab2C1[2][] = {
  31,28,31,30,31,30,31,31,30,31,30,31,
  31,29,31,30,31,30,31,31,30,31,30,31
	};*/

	/*char daytab2C1[][] = {
  31,28,31,30,31,30,31,31,30,31,30,31,
  31,29,31,30,31,30,31,31,30,31,30,31
	};*/



	return 0;
}