/*#include <iostream>
#include <cstring>
using namespace std;

struct Student {   //����� �⺻ public
	string name;
	int grade;
	string phone;
};

int main() {
	//�ڷ� ���� �� ����
	Student s1 = Student();    //s1 = ����ü�� �����̴�.
	s1.name = "���ϳ�";
	s1.grade = 3;
	

	//��ü �迭�� ����
	Student s[3] = {
		{ "�뿵��", 1, "010-1111-5555" },
		{ "�����", 2, "010-2222-5555" },
		{ "������", 3, "010-3333-5555" }
	};


	//�ڷ� ���
	cout << s1.name << "�л��� " << s1.grade << "�г��Դϴ�." << endl;
	
	for (int i = 0; i < 3; i++) {
		cout << s[i].name << "�л��� "
			<< s[i].grade << "�г��̰�, ��ȭ��ȣ�� "
			<< s[i].phone << "�Դϴ�." << endl;
	}


	return 0;
}*/