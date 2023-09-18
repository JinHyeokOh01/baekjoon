#include <iostream>
#include <string>
using namespace std;

int main() {
	double sum = 0;
	double avg = 0;
	int except_p = 0;
	string str;
	
	string arr[8] = { "A+", "A0", "B+", "B0", "C+", "C0", "D+", "D0" };
	for (int i = 0; i < 20; i++) {
		cin >> str;
		int idx = 0;
		int j = 0;
		while (true) {
			if (str.find(arr[j]) == string::npos)
				break;
			else
				idx = str.find(arr[j]);
			j++;
		}

		std::cout << "This is str[idx] " << str[idx] << endl;
		switch (str[idx]) {
		case 6543 :
			sum += str[1] * 4.5;
			except_p++;
		case 6548 :
			sum += str[1] * 4.0;
			except_p++;
		case 6643 :
			sum += str[1] * 3.5;
			except_p++;
		case 6648 :
			sum += str[1] * 3.0;
			except_p++;
		case 6743 :
			sum += str[1] * 2.5;
			except_p++;
		case 6748 :
			sum += str[1] * 2.0;
			except_p++;
		case 6843 :
			sum += str[1] * 1.5;
			except_p++;
		case 6848 :
			sum += str[1] * 1.0;
			except_p++;
		}

		
	}
	avg = sum / except_p;
	return 0;
	
}