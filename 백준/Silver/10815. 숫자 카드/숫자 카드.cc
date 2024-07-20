#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool binarysearch(vector<int>& a, int k);

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int N = 0, M = 0, x = 0;
	vector<int> m1, m2, m3;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x;
		m1.push_back(x);
	}
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> x;
		m2.push_back(x);
	}
	sort(m1.begin(), m1.end());
	for (int i = 0; i < M; i++) {
		bool found = binarysearch(m1, m2[i]);
		if (found)
			m3.push_back(1);
		else if(!found)
			m3.push_back(0);
	}
	for (int i = 0; i < M; i++)
		cout << m3[i] << " ";
	return 0;
}

bool binarysearch(vector<int>& a, int k) {
	int low = 0;
	int high = a.size() - 1;
	int mid = high;

	while (low <= high) {
		mid = (low + high) / 2;
		if (k == a[mid])
			return true;
		else {
			if (k < a[mid])
				high = mid - 1;
			else
				low = mid + 1;
		}
	}
	return false;
}