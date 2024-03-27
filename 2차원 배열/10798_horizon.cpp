#include <iostream>
using namespace std;

int main() {
    char array[5][5] = { '0',};

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> array[i][j];
        }
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cout << array[j][i];
        }
    }
    return 0;
}