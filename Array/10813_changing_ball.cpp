#include <iostream>

using namespace std;

int main() {
	int n = 0, m = 0, i = 0, j = 0, temp = 0;
	int* basket = nullptr;

	cin >> n >> m;
	basket = new int[n];

	for (int a = 0; a < n; a++) {
		basket[a] = a+1;
	}
		
	for (int b = 0; b < m; b++) {
		cin >> i >> j;
		temp = basket[i-1];
		basket[i-1] = basket[j-1];
		basket[j-1] = temp;
	}

	for (int c = 0; c < n; c++) {
		cout << basket[c] << " ";
	}

	delete[] basket;

	return 0;

}