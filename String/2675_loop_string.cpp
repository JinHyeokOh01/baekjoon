#include <iostream>
#include <string>
using namespace std;

int main() {
	int t = 0, r = 0;
	string str;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> r >> str;

		for (int j = 0; j < str.length(); j++) {
			for (int k = 0; k < r; k++)
				cout << str[j];
		}
		cout << endl;
	}

	return 0;
}