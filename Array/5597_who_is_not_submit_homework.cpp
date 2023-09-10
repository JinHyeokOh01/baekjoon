#include <iostream>
using namespace std;

int main() {
	int n[30] = { 0 };
	int num = 28;
	int g = 1, temp = 0;

	for (int i = 0; i < num; i++)
		cin >> n[i];

	for (int j = 0; j < num - 1; j++) {
		for (int k = j + 1; k < num; k++) {
			if (n[j] > n[k]) {
				temp = n[k];
				n[k] = n[j];
				n[j] = temp;
			}
		}
	}

	for (int h = 0; h < 30; h++) {

		if (g >= 31)
			break;

		if (n[h] != g) {
			cout << g << " ";
			h--;
		}
		g++;
	}

	return 0;
}