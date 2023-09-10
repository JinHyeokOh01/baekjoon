#include <iostream>
using namespace std;

int main() {
	int n = 0;
	double m = 0, max = 0, sum = 0, avg = 0;
	double* arr = nullptr;

	cin >> n;
	arr = new double[n];

	for (int i = 0; i < n; i++) {
		cin >> m;
		arr[i] = m;
	}
	max = arr[0];

	for (int j = 0; j < n-1; j++) {
		for (int k = j; k < n; k++) {
			if (max < arr[k])
				max = arr[k];
		}
	}

	for (int h = 0; h < n; h++) {
		arr[h] = (arr[h] / max) * 100;
		sum += arr[h];
	}
	avg = sum / n;

	cout << avg;

	delete[] arr;

	return 0;
}