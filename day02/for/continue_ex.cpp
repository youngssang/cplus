#include <iostream>
using namespace std;

int main() {
	//1���� 10���� ���
	for (int i = 1; i <= 10; i++) {
		if (i % 2 == 1) {
			sum += i;
			cout << i << " ";
			
		cout << i << endl;
	}
	}

	//1���� 10������ Ȧ���� ��
	int = sum = 0;
	for (int i = 1; i <= 10; i++) {
		if (i == 5 || i == 6)
			continue;   //�Ʒ��� �������� �ʰ� �ٽ� ���� �÷�����
		cout << i << endl;
	}

	return 0;
}