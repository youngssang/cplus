#include <iostream>
using namespace std;

//inline �Լ��� ȣ���� �Ͼ�� ����(����ӵ� ������)
inline int square(int x) { return x * x;}
inline int min(int a, int b) { return a > b ? b : a; }

int main() {

	cout << square(5) << endl;   //������ ���
	cout << min(5, 6) << endl;   //�� ���� ���� �� ���
	cout << min(6, 5) << endl;   //���� ��� ����.

	return 0;
}