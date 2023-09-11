#include <iostream>
#include <string>
using namespace std;

int main() {
	int need_time = 0;
	string str;
	cin >> str;
	int time[] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
	for (int i = 0; i < str.length(); i++) {
		need_time += time[int(str[i]) - 65];
	}
	cout << need_time;

	return 0;
}