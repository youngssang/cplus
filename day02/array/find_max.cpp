#include <iostream>
#include <cstring>
using namespace std;

int main() {
	
	int arr[6] = { 2, 71, 59, 33, 94, 25 };
	char str[] = "game over!";

	//�ִ� ���� ã��
	int maxVal = arr[0];  //�� �� ���� �ִ밪���� ����
	for (int i = 1; i < 6; i++)
		if (maxVal < arr[i]) maxVal = arr[i];

	cout << "max val = " << maxVal << endl;

	//�ִ� ���� ã��
	cout << strlen(str) << endl;
	char maxChar = str[0];
	for (int i = 1; i < strlen(str); i++)
		if (maxChar < str[i]) maxChar = str[i];
	cout << "max char = " << maxChar << endl;

	return 0;
}