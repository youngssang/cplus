#include <iostream>	
using namespace std;

int main() {
	//1���� 10���� ���
	int n = 0;
	
	while (n < 10) {
		n += 1;   //n++
		cout << n << " ";
	}
	cout << endl;
	cout << n << endl; //n = 10

	//�ݺ� ���ǹ�(break��)
	n = 0;
	while (true) {    //c��� = while(1)
		n += 1;
		if (n > 10) break;
		cout << n << " ";
	}


	return 0;
}