#include "seat.h"
void getseat(int custom, int col) {
	int row;
	if (custom % col == 0) {
		row = custom / col;
	}
	else {
		row = (custom / col) + 1;
	}

	cout << "필요한 줄 수는 " << row << "줄 입니다." << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 1; j < col; j++) {
			cout << i * col + j;
			if (seatNum > custom) break;
			cout << "좌석" <  seatNum << " ";

		}
		cout << endl;
	}




	int main() {
		int customNum, colNum, rowNum;

		cout << "입장객 수 입력 : ";
		cin >> customNum;

		cout << "좌석 열 수 입력 : ";
		cin >> colNum;

		getSeat(customNum, rowNum);

		return 0;
}
