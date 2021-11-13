#include <iostream>
using namespace std;
#include <ctime>
#include <Windows.h>

int main() {
	long start, end;

	start = time(NULL);   //시작 시간   //2017 ~ 현재까지 초로 계산
	//cout << start << "초" << endl;

	for (int i = 0; i < 100; i++) {
		cout << i << endl;
		Sleep(10);  // 0.01초
	}
	end = time(NULL);  //종료 시간
	cout << "for문 수행 시간 : " << (end - start) << "초" << endl;

	return 0;
}