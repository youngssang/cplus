#include <iostream>
using namespace std;

int main() {
	//2차원 행렬 -> 중첩 for
	int i, j;

	for (i = 1; i <= 5; i++) {
		for (j = 1; j <= i; j++) {
			cout << "$";
		}
		cout << endl;
	}
	/* 직각 삼각형 만들기
	$    j = 1; j <= (i); j++
	$$
	$$$
	$$$$
	$$$$$
	  역직각 삼각형 만들기
	$$$$$    j = 1; j <= (6-i); j++    두가지방법
	$$$$     j = 6 - i; j > 0; j--
	$$$
	$$
	$
	*/
	for (i = 1; i <= 5; i++) {
		for (j = 6 - i; j > 0; j--) {
			cout << "$";
		}
		cout << endl;
	}

	return 0;
}