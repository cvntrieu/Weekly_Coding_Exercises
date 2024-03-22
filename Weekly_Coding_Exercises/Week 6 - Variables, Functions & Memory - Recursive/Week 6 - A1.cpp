
#include <iostream>  

using namespace std;

int main() {

	int m = 0, M = 6, m2 = 9;
	int a[3] = { 1, 2, 3 };
	int n = 4, N = 7;
	char b[3] = { 'a', 'b', 'c' };
	int q = 5, Q = 8;

	cout << "Address of a: "
		<< &a[0] << " "			  
		<< &a[1] << " "			  
		<< &a[2] << endl;		 

	cout << "Address of b: "
		<< (void*)&b[0] << " "    
		<< (void*)&b[1] << " "    
		<< (void*)&b[2] << endl;  

	cout << "Address of others: "
		<< &m << " "               
		<< &m2 << " "             
		<< &M << " "			  
		<< &n << " "              
		<< &N << " "              
		<< &q << " "			  
		<< &Q << endl;            

// Address of a: 0000002ADE30FBF8 0000002ADE30FBFC 0000002ADE30FC00
// Address of b : 0000002ADE30FC64 0000002ADE30FC65 0000002ADE30FC66
// Address of others :
//  0000002ADE30FB94 0000002ADE30FBD4 0000002ADE30FBB4 0000002ADE30FC24
//  0000002ADE30FC44 0000002ADE30FC84 0000002ADE30FCA4

// Nhan xet: Dia chi cac phan tu lien tiep cua a tang dan 4 byte
//           Dia chi cac phan tu lien tiep cua b tang dan 1 byte
// Vi tri tuong doi giua cac bien con lai noi chung khong ro rang.


	return 0;
}