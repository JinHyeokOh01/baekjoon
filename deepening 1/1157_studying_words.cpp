#include <iostream>
using namespace std;

int main() {
	int alphabet[26] = { 0 };
	int temp = 0, count = 0;
	string str;
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		if (str[i] > 90)
			str[i] -= 32;
		temp = int(str[i] - 65);
		alphabet[temp] += 1;
	}
	int max = alphabet[0];
	temp = 0;
	for (int j = 1; j < 26; j++)
		if (max < alphabet[j]) {
			temp = j;
			max = alphabet[j];
		}

	for (int k = 0; k < 26; k++)
		if (max == alphabet[k])
			count++;

	if (2 <= count) {
		cout << "?";
		return 0;
	}

	else {
		cout << char(temp + 65);
		return 0;
	}
}