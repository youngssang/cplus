#include "dog.h"

Dog::Dog() {     //������ - �ʱ�ȭ�ϱ�
	type = "no type";
	color = "white";
	age = 1;
}

Dog::Dog(string t, string c, int a) {
	type = t;
	color = c;
	age = a;
}

void Dog::dogInfo() {
	cout << "���� : " << type << endl;
	cout << "���� : " << color << endl;
	cout << "���� : " << age << endl;
}

void Dog::bark() {
	cout << "��~ ��~" << endl;
}
