#include <iostream>
#include <string>
using namespace std;

class Dog {
public:
	string type;    //����
	string color;   //����
	int age;     //����

	Dog();     //������
	Dog(string t, string c, int a);

	void dogInfo();
	void bark();
};