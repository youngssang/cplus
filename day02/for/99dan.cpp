#include <iostream>
using namespace std;

int main() {
	//������ ��ü
	int i, j;
	/*for (i = 2; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			cout << i << " x " << j
				<< " = " << i * j << endl;
		}
		cout << endl;
	}*/
	//�ܺ��� �۰ų� ���� ���� ����ϱ�
	for (i = 2; i <= 9; i++) {
		for (j = 1; j <= i; j++) {
			cout << i << " x " << j
				<< " = " << i * j << endl;
		}
		cout << endl;
	}



	return 0;
}