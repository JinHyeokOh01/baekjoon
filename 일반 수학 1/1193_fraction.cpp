#include <iostream>
using namespace std;

int main() {
	int N = 0;
	int low = 0;
	int high = low;

	int numerator = 0;
	int denominator = 0;

	cin >> N;

	int i = 1;

	while (true) {

		low = high;
		high += i;

		if (low < N && N <= high) {
			if (i % 2 == 0) {
				for (int j = 0; j < N - low; j++) {
					numerator = 1 + j;
					denominator = i - j;
				}
			}
			else {
				for (int j = 0; j < N - low; j++) {
					numerator = i - j;
					denominator = 1 + j;
				}

			}
			break;
		}

		i++;
	}

	cout << numerator << "/" << denominator;

	return 0;
}