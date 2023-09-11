#include <iostream>
using namespace std;

int main() {
	int a = 0, b = 0, a2 = 0, b2 = 0;
	cin >> a >> b;

	a2 = a / 100 + ((a / 10) % 10) * 10 + (a % 10) * 100;
	b2 = b / 100 + ((b / 10) % 10) * 10 + (b % 10) * 100;

	if (a2 > b2)
		cout << a2;
	else
		cout << b2;
	return 0;
}