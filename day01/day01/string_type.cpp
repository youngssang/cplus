#include <iostream>
#include <string>
using namespace std;   

int main() {

	string cart = "����";   //string ���ڿ� �ڷ���

	cout << cart << endl;  //����

	string cartList[] = { "Ŀ��", "����", "���" };
	cout << "*** Ŀ�� ��� ***" << endl;
	cout << cartList[0] << endl;  //Ŀ��
	cout << "*** ��ü ��� ��� ***" << endl;
	for (int i = 0; i < 3; i++) {
		cout << cartList[i] << " ";
	}


	return 0;

}