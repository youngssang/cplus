#include <iostream>
using namespace std;

int mypow(int n, int y) {     //pow = �ŵ����� �Լ� ���� (nxnxnxn)  y = Ƚ��
	int res = 1;
	for(int i = 0; i < y; i++){ //y = Ƚ��. �ݺ�����
		res = res * n;


	}
	//i = 0, res = 1 x 2
	//i = 1, res = 2 x 2
	//i = 2, res = 4 x 2 > 2x2x2
	//i = 3, res = 8 x 2 > 2x2x2x2


	return res;
	
}
int mypow(int n) {   //������ �Լ�
	return n * n;
}

int main() {

	int num = mypow(2, 4);   //  2x2x2x2
	cout << num << endl;

	return 0;
}