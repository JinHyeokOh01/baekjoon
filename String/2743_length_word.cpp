#include <iostream>
using namespace std;

int main() {
	string str;
	int count = 0;
	cin >> str;
	while (str[count] != NULL)
		count++;
	cout << count;
	return 0;
}