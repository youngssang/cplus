#include <iostream>
using namespace std;
#include <cstdlib>
int main() {
	//rand() 함수 사용

	//srand(2);  //seed 자동배정(<time()> 함수 적용)
	srand(time(NULL));
	
	//cout << rand() << endl;
	//rand() % 2 + 1;   //동전의 앞 뒤면
	//rand() % 6 + 1;   //주사위의 눈
	//rand() % 10 + 1;   //1~10 무작위 수

	//주사위 10번 던지기
	for (int i = 0; i < 10; i++) {
		int dice = rand() % 6 + 1;
		cout << dice << endl;
	}
	


	return 0;
}