#include <iostream>
using namespace std;     //�Ҽ�(�з�)
int main() {

	//�ڷ����� ũ��
	// 
	//������
	cout << "int�� : " << sizeof(int) << "byte" << endl;
	cout << "short�� : " << sizeof(short) << "byte" << endl;
	cout << "long�� : " << sizeof(long) << "byte" << endl;
	//�Ǽ���
	cout << "float�� : " << sizeof(float) << "byte" << endl;
	cout << "double�� : " << sizeof(double) << "byte" << endl;
	//������
	cout << "char�� : " << sizeof(char) << "byte" << endl;

	//����
	cout << "bool�� : " << sizeof(bool) << "byte" << endl;

	//�ڷ����� ����
	char ch = 97;
	cout << ch << endl;    //a
	
	char ch2 = 200;      //���� �ʰ�
	cout << ch2 << endl;    // ch = -128 ~ 127������ ����

	int num1 = 2147483647;   //int�� �ִ밪
	cout << num1 << endl;

	int num2 = 2147483648;    //�ִ밪����. ���� �÷ο�
	cout << num2 << endl;     // -2147483648

	return 0;
}