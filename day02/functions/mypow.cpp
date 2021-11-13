#include <iostream>
using namespace std;

int mypow(int n, int y) {     //pow = °ÅµìÁ¦°ö ÇÔ¼ö Á¤ÀÇ (nxnxnxn)  y = È½¼ö
	int res = 1;
	for(int i = 0; i < y; i++){ //y = È½¼ö. ¹Ýº¹º¯¼ö
		res = res * n;


	}
	//i = 0, res = 1 x 2
	//i = 1, res = 2 x 2
	//i = 2, res = 4 x 2 > 2x2x2
	//i = 3, res = 8 x 2 > 2x2x2x2


	return res;
	
}
int mypow(int n) {   //Á¦°ö¼ö ÇÔ¼ö
	return n * n;
}

int main() {

	int num = mypow(2, 4);   //  2x2x2x2
	cout << num << endl;

	return 0;
}