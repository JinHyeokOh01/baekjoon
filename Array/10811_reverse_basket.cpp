#include <iostream>
using namespace std;

int main() {
	int n = 0, m = 0, i = 0, j = 0, temp = 0;
	int* arr = nullptr;
	int* arr2 = nullptr;

	cin >> n >> m;

	arr = new int[n];
	arr2 = new int[n];

	for (int a = 0; a < n; a++) {
		arr[a] = a + 1;
		arr2[a] = arr[a];
	}

	for (int b = 0; b < m; b++) {
		int d = 0;
		cin >> i >> j;
		for (int c = i-1; c <= j-1; c++) {
			temp = arr2[j - d - 1];
			arr2[j - d - 1] = arr[c];
			arr[c] = temp;
			d++;
			if (j - d < i)
				break;
		}
	}
	
	for (int g = 0; g < n; g++) {
		cout << arr[g] << " ";
	}

	delete[] arr, arr2;

	return 0;

}