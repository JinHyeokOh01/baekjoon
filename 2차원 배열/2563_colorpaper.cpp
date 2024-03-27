#include <iostream>
using namespace std;

int main() {
	int paper[100][100] = { 0, };
	int x = 0, y = 0, n = 0, count = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		for (int j = x; j < x + 10; j++) {
			for (int k = y; k < y + 10; k++) {
				if (paper[j][k] != 1) {
					paper[j][k] = 1;
					count++;
				}
			}
		}
	}
	cout << count;
	return 0;
}