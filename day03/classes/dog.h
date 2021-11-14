#include <iostream>
#include <string>
using namespace std;

class Dog {
public:
	string type;    //종류
	string color;   //색상
	int age;     //나이

	Dog();     //생성자
	Dog(string t, string c, int a);

	void dogInfo();
	void bark();
};