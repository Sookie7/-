#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int num[5][5] ;

	for (int i = 0;i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> num[i][j];
		}
	}
	int n,m;
	cin >> n >> m;
	if (n >= 5 || n < 0 || m >= 5 || m < 0) {
		cout<< "error" << endl;
		return 0;
	}

	int result[5][5];
	for (int i = 0;i < 5; i++) {
		int row;
		if (i == n) {
			row = m;
		} else if (i == m) {
			row = n;
		} else {
			row = i;
		}
		for (int j = 0; j < 5; j++) {
			result[i][j] = num[row][j];
			cout << setw(4)  << result[i][j];

			if (j == 4) {
				cout << endl;
			}
		}
	}
	return 0;
}
