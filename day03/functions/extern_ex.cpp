#include "add.h"


extern int _count;          //���� �Ұ�
int add(int, int);  //extern = �Լ� ���ÿ� ���� ����
//�ܺ� ���� ���� extern Ű���� ���

int main() {

	int x = 3, y = 4, z;

	_count++;
	cout << _count << endl;   //1

	z = add(x, y);
	cout << z << endl;   //7

	return 0;
}