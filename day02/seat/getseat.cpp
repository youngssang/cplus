#include "seat.h"
void getseat(int custom, int col) {
	int row;
	if (custom % col == 0) {
		row = custom / col;
	}
	else {
		row = (custom / col) + 1;
	}

	cout << "�ʿ��� �� ���� " << row << "�� �Դϴ�." << endl;
	for (int i = 0; i < row; i++) {
		for (int j = 1; j < col; j++) {
			cout << i * col + j;
			if (seatNum > custom) break;
			cout << "�¼�" <  seatNum << " ";

		}
		cout << endl;
	}




	int main() {
		int customNum, colNum, rowNum;

		cout << "���尴 �� �Է� : ";
		cin >> customNum;

		cout << "�¼� �� �� �Է� : ";
		cin >> colNum;

		getSeat(customNum, rowNum);

		return 0;
}
