#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

int main() {
	/*up and down ����
	//������ ���ڰ� ������ "�����Դϴ�." ,  break;
	//���̸� ���ڰ� �ĺ��� ũ�� "�ʹ� Ŀ��." , �ݺ�
	//���̸� ���ڰ� �ĺ��� ������ "�ʹ� �۾ƿ�."
	*/


	int com, guess, min = 1, max = 100, i;

	srand((unsigned)time(NULL));   //unsigned�� 0���� ����.  0 ~ 43��
	com = rand() % 100 + 1;   //�� ���� ����. include �ϱ�. cstdlib

	for (i = 0; i < 10; i++) {   //10ȸ
		cout << "[" << i + 1 << "ȸ]" << min << " ~ " << max << " ������ �� ���� => ";
		cin >> guess;

		//���� ó��
		if (guess == com) {
			cout << "�����Դϴ�." << endl;
			break;
		}
		else if (guess > com) {
			cout << "�ٿ�" << endl;
			max = guess;
		}
		else {
			cout << "��" << endl;
			min = guess;	
		}
	}
	cout << "����.." << endl;
	cout << "���� : " << com << endl;
	cout << "���� ���� : " << (10 - i) * 10 << endl;

	return 0;
}