#include <iostream>
using namespace std;

void count() {
	int x = 0;           //지역 변수 (호출하고 나면 블럭 안에서 사라진다 ?)
	static int y = 0;    //정적 변수 (고정되어있다. 프로그램 종료되어야 해제됨.)
	x += 1;
	y += 4;
	cout << "x = " << x << ", y = " << y << endl;

}

int main() {

	count();
	count();


	return 0;
}