#include <iostream>
using namespace std;

void printGugudan(int) {   //�Լ� ����

int main() {

		printGugudan(5);   //�Լ� ȣ��

		return 0;
}
void printGugudan(int dan) {   //�Լ� ����
	for (int i = 1; i < 10; i++) {
		cout << dan << " x " << i
			<< " = " << dan * i << endl;
	}