#include <iostream>
using namespace std;

int main() {
	/*
	�Է� ó��
	y - "��� �ݺ�",
	n - "�ݺ� �ߴ�",
	�� ���� Ű - "�߸� �������ϴ�."
	*/
	char key;
	while (true) {
		cout << "��� �ݺ��ұ��? ";
		cin >> key;     //c++�� &������ ��� ����

	//���� ó��
		if (key == 'y') {
			cout << "��� �ݺ�" << endl;
		}
		else if (key == 'n' || key == 'N') {
			cout << "�ݺ� �ߴ�" << endl;
			break;
		}
		else {
			cout << "�߸� �������ϴ�." << endl;
		}
	}
	cout << "���α׷� ����!" << endl;

	return 0;
}