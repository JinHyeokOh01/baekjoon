#include <iostream>
using namespace std;

int main() {
	int count = 0;
	int re_money[4] = {0};
	cin >> count;
	int* arr = new int[count];

	for (int i = 0; i < count; i++)
		cin >> arr[i];
	for (int j = 0; j < count; j++) {
		re_money[0] = arr[j] / 25;
		arr[j] %= 25;
		re_money[1] = arr[j] / 10;
		arr[j] %= 10;
		re_money[2] = arr[j] / 5;
		arr[j] %= 5;
		re_money[3] = arr[j] / 1;
		for (int k = 0; k < 4; k++)
			cout << re_money[k] << " ";
		cout << endl;
	}
	delete []arr;
	return 0;
}