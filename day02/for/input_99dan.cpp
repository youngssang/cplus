#include <iostream>
using namespace std;

int main() {
	//���� �Է¹޾� ������ ����ϱ�
	
	int dan;
	cout << "���� �Է��ϼ��� : ";
	cin >> dan;
	cout << "  [" << dan << "] ��" << endl;
	for (int i = 1; i < 10; i++) {
		cout << dan << " x " << i
			<< " = " << dan * i << endl;
	}


	return 0;
}