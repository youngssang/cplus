#include "dog.h"

Dog::Dog() {     //생성자 - 초기화하기
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
	cout << "종류 : " << type << endl;
	cout << "색상 : " << color << endl;
	cout << "나이 : " << age << endl;
}

void Dog::bark() {
	cout << "멍~ 멍~" << endl;
}
