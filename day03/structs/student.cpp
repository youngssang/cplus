#include <iostream>
#include <cstring>
using namespace std;

struct Student {

	char name[20];
	int grade;
	char phone[20];
};

int main() {
	//�ڷ� ���� �� ����
	struct Student s1;     //s1 = ����ü�� �����̴�.
	strcpy_s(s1.name, 20, "�̿���");
	s1.grade = 1;
	strcpy_s(s1.phone, sizeof(s1.phone), "010-1234-5678");

	struct Student s2 = { "��ȭ��", 2, "010-3333-5555" };
	
	//��ü �迭�� ����
	struct Student s[3] = {
		{ "�뿵��", 1, "010-1111-5555" },
		{ "�����", 2, "010-2222-5555" },
		{ "������", 3, "010-3333-5555" }
	};


	//�ڷ� ���
	cout << s1.name << "�л��� " << s1.grade << "�г��Դϴ�." << endl;
	cout << s2.name << "�л��� " << s2.grade << "�г��Դϴ�." << endl;

	for (int i = 0; i < 3; i++) {
		cout << s[i].name << "�л��� "
			<< s[i].grade << "�г��̰�, ��ȭ��ȣ�� "
			<< s[i].phone << "�Դϴ�." << endl;
	}


	return 0;
}