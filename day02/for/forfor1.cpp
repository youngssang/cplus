#include <iostream>
using namespace std;

int main() {
	//2���� ��� -> ��ø for
	int i, j;

	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= i; j++) {
			cout << "$";
		}
		cout << endl;
	}
	/* ���� �ﰢ�� �����
	$    j = 1; j <= (i); j++
	$$
	$$$
	$$$$
	$$$$$
	  ������ �ﰢ�� �����
	$$$$$    j = 1; j <= (6-i); j++    �ΰ������
	$$$$     j = 6 - i; j > 0; j--
	$$$
	$$
	$
	*/
	for (i = 1; i <= 5; i++) {
		for (j = 6 - i; j > 0; j--) {
			cout << "$";
		}
		cout << endl;
	}

	return 0;
}