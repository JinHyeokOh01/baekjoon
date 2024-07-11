#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int number;
	vector<int> v;
	cin >> number;
	while (true) {
		v.push_back(number % 10);
		if (number < 10)
			break;
		number = number / 10;
	}
	sort(v.begin(), v.end(), greater<int>());
	for (int i = 0; i < v.size(); i++)
		cout << v[i];
	return 0;
}