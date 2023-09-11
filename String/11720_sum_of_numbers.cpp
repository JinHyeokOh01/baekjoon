#include <iostream>
using namespace std;

int main() {
	string str;
	int num = 0, sum = 0;

	cin >> num;
	cin >> str;
	for (int i = 0; i < num; i++)
		sum += str[i]-'0';
	cout << sum;
	return 0;
}