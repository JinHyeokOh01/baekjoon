#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	cin >> str;
	int i = 0;
	int j = str.length()-1;
	while (i < j) {
		if (str[i] != str[j-i]) {
			cout << 0;
			return 0;
		}
		i++;
	}
	cout << 1;

	return 0;
}