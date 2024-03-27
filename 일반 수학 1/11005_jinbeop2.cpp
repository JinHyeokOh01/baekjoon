#include <iostream>
#include <algorithm>					
using namespace std;

int main() {
	string output = "";
	int input = 0;
	int jinbeop = 0;
	cin >> input >> jinbeop;
	while (input > 0) {
		int r = input % jinbeop;
		if (r < 10) 
			output += (char)(r + '0');
		else 
			output += (char)(r - 10 + 'A');
		input /= jinbeop;
	}

	reverse(output.begin(), output.end());

	cout << output << endl;
	return 0;
}