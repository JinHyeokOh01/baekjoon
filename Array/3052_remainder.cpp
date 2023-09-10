#include <iostream>
using namespace std;

int main() {
	int arr[10] = { 0 };
	int temp = 0, count = 1;

	for (int i = 0; i < 10; i++) {
		cin >> temp;
		arr[i] = temp % 42;
	}

	for (int j = 0; j < 9; j++) {
		for (int k = j + 1; k < 10; k++) {
			if (arr[j] > arr[k]) {
				temp = arr[k];
				arr[k] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int h = 0; h < 9; h++) {
		if (arr[h] != arr[h + 1])
			count++;
	}

	cout << count;

	return 0;

}