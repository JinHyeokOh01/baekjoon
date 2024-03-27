#include <iostream>
using namespace std;

int main() {
	string inputnum = "0";
	int translate = 0;
	int jinbeop = 0;
	cin >> inputnum >> jinbeop;
	for (int i = 0; i < inputnum.length(); i++) {
		if (inputnum[i] >= '0' && inputnum[i] <= '9') {
			translate = translate * jinbeop + (inputnum[i] - 48);
		}
		else
			translate = translate * jinbeop + (inputnum[i] - 55);
	}
	cout << translate;
	return 0;
}