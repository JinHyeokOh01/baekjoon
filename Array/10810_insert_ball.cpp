#include <iostream>
using namespace std;

int main() {
	int n = 0, m = 0;
	int i = 0, j = 0, k = 0;
	int* pT = nullptr;

	cin >> n >> m;

	pT = new int[n];

	for (int a = 0; a < n; a++) {
		pT[a] = 0;
	}

	for (int b = 0; b < m; b++) {
		cin >> i >> j >> k;
		for (int c = i - 1; c < j; c++)
			pT[c] = k;
	}

	for (int d = 0; d < n; d++) {
		if (pT[d] == 0)
			cout << 0 << " ";
		else
			cout << pT[d] << " ";
	}

	delete[] pT;

	return 0;

}