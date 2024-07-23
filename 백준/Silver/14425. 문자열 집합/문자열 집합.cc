#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int N = 0, M = 0, count = 0;
	cin >> N >> M;
	vector<string> v1;
	string mm;
	for (int i = 0; i < N; i++) {
		cin >> mm;
		v1.push_back(mm);
	}
	sort(v1.begin(), v1.end());
	for (int i = 0; i < M; i++) {
		cin >> mm;
		if (binary_search(v1.begin(), v1.end(), mm))
			count++;
	}
	cout << count;
	return 0;
}