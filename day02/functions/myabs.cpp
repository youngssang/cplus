#include <iostream>
using namespace std;

int myAbs(int x) {   //abs = ���밪
	//������ �Է��ϸ� ��� ���
	//����� �Է��ϸ� ��� ���
	if (x < 0)
		return -x;
	else
		return x;
}
int square(int x) {   //������ �Լ�
	return x * x;
}

int main() {

	int num = myAbs(-3);   //��ȯ�� �޴� ����
	int num2 = myAbs(3);   //��ȯ�� �޴� ����
	int num3 = square(5);
	cout << num << endl;   //3
	cout << num2 << endl;   //3
	cout << num3 << endl;   //3

	return 0;
}