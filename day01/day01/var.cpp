#include <iostream>
using namespace std;     //�Ҽ�(�з�)
int main() {

	char name[7] = "ȫ�浿";  //int = 40byte, char = 10byte / '\0'�� ����
	int grade;      //�г�
	//int class;     //��  �����(Ű����) ��� �Ұ�
	int schoolClass; //��

	grade = 2;
	schoolClass = 5;

	cout << name << " �л��� " << grade << "�г� " << schoolClass << "���Դϴ�." << endl;

	return 0;
}