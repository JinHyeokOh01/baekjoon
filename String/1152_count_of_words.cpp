#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int count = 0;
	getline(cin, str);

	if (str[0] != ' ')
		count++;
		

	for (int i = 0; i < str.length()-1; i++) {
		if (str[i] == ' ')
			count++;
	}

	if (str[str.length()])
		count--;

	cout << count;
	return 0;
}