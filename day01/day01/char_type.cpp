#include <iostream>
using namespace std;     //�Ҽ�(�з�)

int main() {
	//���� �ڷ���
	char ch = 'a';
	char ch2[3] = "��";         // 3byte�� �ʿ���
	char ch3[] = "\uD55C";     //�����ڵ�� �ѱ� �Է�

	cout << "ch = " << ch << endl;
	cout << "ch�� �ƽ�Ű�� = " << (int)ch << endl;   //97

	cout << "ch2 = " << ch2 << endl;
	cout << "ch3 = " << ch3 << endl;

	char cart[] = "���";
	cout << "cart = " << cart << endl;


	return 0;

}