#include <iostream>
using namespace std;

int main() {
	string str;
	int arr[26] = { 0 };
	int size = 0;
	cin >> str;
	for (int k = 0; k < 26; k++)
		arr[k] = -1;
	while (str[size] != NULL)
		size++;
	for (int i = 0; i < size; i++) {
		if (arr[str[i] - 'a'] != -1)
			continue;
		else
			arr[str[i] - 'a'] = i;
	}
	for (int j = 0; j < 26; j++)
		cout << arr[j] << " ";
	return 0;
}