#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int N;
	cin >> N;
	int cell[N][N];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> cell[i][j];
		}
	}

	int error_num = 0;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			int flag_num = 0;
			if (i - 1 >= 0 && cell[i-1][j] - cell[i][j] >= 50) {
				flag_num++;
			}

			if (i + 1 < N && cell[i+1][j] - cell[i][j] >= 50) {
				flag_num++;

			}

			if (j - 1 >= 0 && cell[i][j - 1] - cell[i][j] >= 50) {
				flag_num++;
			}

			if (j + 1 < N && cell[i][j + 1] - cell[i][j] >= 50) {
				flag_num++;
			}
			if (flag_num == 4) {
				error_num ++;
			}
		}
	}
	cout << error_num << endl;
	return 0;
}