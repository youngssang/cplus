#include <iostream>
using namespace std;
#include <ctime>
#include <Windows.h>

int main() {
	long start, end;

	start = time(NULL);   //���� �ð�   //2017 ~ ������� �ʷ� ���
	//cout << start << "��" << endl;

	for (int i = 0; i < 100; i++) {
		cout << i << endl;
		Sleep(10);  // 0.01��
	}
	end = time(NULL);  //���� �ð�
	cout << "for�� ���� �ð� : " << (end - start) << "��" << endl;

	return 0;
}