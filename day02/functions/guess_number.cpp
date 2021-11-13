#include <iostream>
using namespace std;
#include <cstdlib>
#include <ctime>

int main() {
	/*up and down 게임
	//추측한 숫자가 맞으면 "정답입니다." ,  break;
	//게이머 숫자가 컴보다 크면 "너무 커요." , 반복
	//게이머 숫자가 컴보다 작으면 "너무 작아요."
	*/


	int com, guess, min = 1, max = 100, i;

	srand((unsigned)time(NULL));   //unsigned는 0부터 센다.  0 ~ 43억
	com = rand() % 100 + 1;   //컴 추측 숫자. include 하기. cstdlib

	for (i = 0; i < 10; i++) {   //10회
		cout << "[" << i + 1 << "회]" << min << " ~ " << max << " 사이의 값 예측 => ";
		cin >> guess;

		//조건 처리
		if (guess == com) {
			cout << "정답입니다." << endl;
			break;
		}
		else if (guess > com) {
			cout << "다운" << endl;
			max = guess;
		}
		else {
			cout << "업" << endl;
			min = guess;	
		}
	}
	cout << "수고링.." << endl;
	cout << "정답 : " << com << endl;
	cout << "최종 점수 : " << (10 - i) * 10 << endl;

	return 0;
}