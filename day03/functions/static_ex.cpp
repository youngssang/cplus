#include <iostream>
using namespace std;

void count() {
	int x = 0;           //���� ���� (ȣ���ϰ� ���� �� �ȿ��� ������� ?)
	static int y = 0;    //���� ���� (�����Ǿ��ִ�. ���α׷� ����Ǿ�� ������.)
	x += 1;
	y += 4;
	cout << "x = " << x << ", y = " << y << endl;

}

int main() {

	count();
	count();


	return 0;
}