#include <iostream>
#include <string>
using namespace std;

int main() {
	int n = 0;
	int check = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int double_check = 0;
		int arr[26] = { 0 };
		string str;
		cin >> str;
		for (int j = 0; j < str.length(); j++) {
			if (j >= 1) {
				if (str[j] != str[j - 1] && arr[int(str[j]) - 97] != 0) {
					double_check++;
					break;
				}
			}
			arr[int(str[j]) - 97]++;
		}
		if (!double_check)
			check++;
	}
	cout << check;
	return 0;
}