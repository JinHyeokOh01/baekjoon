#include <iostream>
using namespace std;

int main() {
	int A = 0;
	int B = 0;
	int V = 0;
	int count = 0;
	int current = 0;

	cin >> A >> B >> V;

	count = V / (A - B);
	current = (A - B) * count;
	if (current + B >= V)
		count -= (A - B) * B;
	cout << count;
	return 0;
}