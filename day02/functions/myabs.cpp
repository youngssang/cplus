#include <iostream>
using namespace std;

int myAbs(int x) {   //abs = 절대값
	//음수를 입력하면 양수 출력
	//양수를 입력하면 양수 출력
	if (x < 0)
		return -x;
	else
		return x;
}
int square(int x) {   //제곱수 함수
	return x * x;
}

int main() {

	int num = myAbs(-3);   //반환값 받는 변수
	int num2 = myAbs(3);   //반환값 받는 변수
	int num3 = square(5);
	cout << num << endl;   //3
	cout << num2 << endl;   //3
	cout << num3 << endl;   //3

	return 0;
}