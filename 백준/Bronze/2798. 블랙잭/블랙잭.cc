#include <iostream>
using namespace std;

int main() {
	int N = 0, M = 0;
	cin >> N >> M;
	int* temp;
	temp = new int[N];
	int result = 0;
	for (int i = 0; i < N; i++)
		cin >> temp[i];
	for (int j = 0; j < N - 2; j++) {
		for (int k = j + 1; k < N - 1; k++) {
			for (int l = k + 1; l < N; l++) {
				if (temp[j] + temp[k] + temp[l] == M) {
					result = temp[j] + temp[k] + temp[l];
					cout << result;
					return 0;
				}
				else if ((M > temp[j] + temp[k] + temp[l]) && abs(M - (temp[j] + temp[k] + temp[l])) < abs(M - result))
					result = temp[j] + temp[k] + temp[l];
			}
		}
	}
	cout << result;
	delete[] temp;
	return 0;
}