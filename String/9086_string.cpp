#include <iostream>
using namespace std;

int main() {
	int num = 0, last = 0;
	string str[10];
	cin >> num;
	for (int i = 0; i < num; i++)
		cin >> str[i];

	for (int j = 0; j < num; j++) {
		last = 0;
		while (str[j][last+1] != NULL)
			last++;
		cout << str[j][0] << str[j][last] << endl;
	}

	return 0;
}