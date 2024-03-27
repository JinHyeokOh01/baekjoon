#include <iostream>

using namespace std;

int main() {
	int N = 0;
	cin >> N;

	int low = 2;
	int high = 1;
	int i = 1;

	while (true) {
		high += 6 * i;
		if (low <= N && N <= high) {
			cout << i + 1;
			break;
		}

		else {
			low += 6 * i;
			i++;
		}

		if (N == 1) {
			cout << 1;
			break;
		}
	}
	return 0;
}