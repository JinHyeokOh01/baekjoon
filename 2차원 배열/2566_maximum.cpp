#include <iostream>
using namespace std;

int main() {
	int matrix[9][9] = { 0, };
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> matrix[i][j];
		}
	}
	int max = 0;
	int num1 = 0, num2 = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (max < matrix[i][j]) {
				max = matrix[i][j];
				num1 = i;
				num2 = j;
			}
		}
	}
	cout << max << endl;
	cout << num1+1 << " " << num2+1;

	return 0;
}