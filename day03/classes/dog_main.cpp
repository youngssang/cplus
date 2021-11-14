#include "dog.h"


//class는 기본이 private 이므로 멤버변수에 접근 불가
//public으로 설정하면 접근 가능

void Dog::dogInfo() {
	cout << "종류 : " << type << endl;
	cout << "색상 : " << color << endl;
	cout << "나이 : " << age << endl;
}

void Dog::bark() {
	cout << "멍~ 멍~" << endl;
}

int main() {
	Dog dog = Dog();  //dog 객체 생성 - 생성자관련
	Dog dog1 = Dog();  //dog 객체(변수) 생성
	Dog dog2 = Dog();  //dog2 객체 생성

	//멤버 접근후 값 저장
	dog1.type = "푸들";
	dog1.color = "brown";
	dog1.age = 3;

	dog2.type = "치와와";
	dog2.color = "black";
	dog2.age = 4;

	//출력
	dog.dogInfo();
	dog1.dogInfo();
	dog2.dogInfo();
	dog2.bark();

	return 0;
}