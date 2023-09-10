#include <iostream>
using namespace std;

int main() {
	int n = 1;
	while (n % 4 != 0)
		cin >> n;
	for (int i = 0; i < n / 4; i++)
		cout << "long ";
	cout << "int" << endl;

	return 0;
}