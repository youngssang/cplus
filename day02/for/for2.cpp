#include <iostream>
using namespace std;

int main() {
	//1���� 5���� ���ϱ�(���丮��=���)
	int times = 1;
	for (int i = 1; i <= 5; i++) {
		cout << i << " ";
		times *= i;
	}
	//i=1, 1x1 ->  1!
	//i=2, 1x2 ->  2!
	//i=3, 2x3 -> 1x2x3 -> 3!
	//i=1, 6x4 -> 1x2x3x4 -> 4!
	//i=5, 24x5 -> 1x2x3x4x5 -> 5!
	return 0;
}