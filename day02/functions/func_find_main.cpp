#include "config.h"



int main() {

	int arr[6] = { 2, 71, 59, 33, 94, 25 };
	char str[] = "game over!";

	int maxVal = findMax(arr, 6);  //��ȯ�� ����

	char maxChar = findChar(str);

	cout << "max Val = " << maxVal << endl;
	cout << "max char = " << maxChar << endl;

	return 0;
}