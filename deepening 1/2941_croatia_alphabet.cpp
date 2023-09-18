#include <iostream>
#include <string>
using namespace std;

int main() {
	int temp = 0;
	string str;
	string arr[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};

	cin >> str;
	for (int i = 0; i < 8; i++) {
		while (true) {
			temp = str.find(arr[i]);
			if (temp == string::npos)
				break;

			str.replace(temp, arr[i].length(), "a");
		}

	}
	cout << str.length();	
	return 0;
}