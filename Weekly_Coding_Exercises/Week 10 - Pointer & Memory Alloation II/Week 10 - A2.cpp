
#include <iostream>

using namespace std;

int main() {

	int* p = new int;
	int* p2 = p;
	*p = 10;

	delete p;	  // (1)
	*p2 = 100;	 // (2)
	cout << *p2; // (3)
	delete p2;   // (4)

	// Cac dong gay loi duoc danh so 1 -> 4 tren.
	// Nguyen nhan gay ra loi: Khi goi lenh delete p (1) thi vung nho ma p va p2 tro toi da giai phong.
	// Vay ma ngay sau do con gan du lieu *p2 = 100 (2) - Truy cap vung du lieu da bi giai phong (SAI)
	// Sau do dong (4) lai giai phong vung du lieu do ( Vi p2 = p ), Sai.

	return 0;
}