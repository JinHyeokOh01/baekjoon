#include <iostream>
#include <string>
using namespace std;

int main() {
	string str;
	int* arr = nullptr;
	cin >> str;
	arr = new int[str.length()];

	for (int i = 0; i < str.length(); i++) {
		arr[i] = 0;
		if (int(str[i]) >= 97)
			str[i] -= 32;
	}
	//여기서 시간초과
	for (int j = 0; j < str.length() - 1; j++) {
		for (int k = j + 1; k < str.length(); k++) {
			if (str[j] == str[k])
				arr[j] += 1;
		}
	}
	

	int max = arr[0];
	int same = 0;
	int location = 0;
	//int g = 1;
	for (int g = 1; g < str.length(); g++) {
		if (max < arr[g]) {
			max = arr[g];
			location = g;
		}
		else if (max == arr[g])
			same++;
	}

	if (same)
		cout << "?";
	else
		cout << str[location];

	delete[] arr;

	return 0;
}