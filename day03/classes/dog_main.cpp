#include "dog.h"


//class�� �⺻�� private �̹Ƿ� ��������� ���� �Ұ�
//public���� �����ϸ� ���� ����

void Dog::dogInfo() {
	cout << "���� : " << type << endl;
	cout << "���� : " << color << endl;
	cout << "���� : " << age << endl;
}

void Dog::bark() {
	cout << "��~ ��~" << endl;
}

int main() {
	Dog dog = Dog();  //dog ��ü ���� - �����ڰ���
	Dog dog1 = Dog();  //dog ��ü(����) ����
	Dog dog2 = Dog();  //dog2 ��ü ����

	//��� ������ �� ����
	dog1.type = "Ǫ��";
	dog1.color = "brown";
	dog1.age = 3;

	dog2.type = "ġ�Ϳ�";
	dog2.color = "black";
	dog2.age = 4;

	//���
	dog.dogInfo();
	dog1.dogInfo();
	dog2.dogInfo();
	dog2.bark();

	return 0;
}