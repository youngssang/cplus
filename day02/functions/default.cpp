#include <iostream>
using namespace std;

void printValue(int x, int y = 1, int z) {
	cout << "x = " << x << ", y = " << y << ", z = " << z << endl;

}
//�Լ��� �⺻ �Ű� ����(default, parameter)
//�ڿ��� �Ű��������� ���� ä�����־����. (int z -> ����)

int main() {


	printValue(1);

	printValue(1, 2);

	printValue(1, 2, 3);

	return 0;
}




