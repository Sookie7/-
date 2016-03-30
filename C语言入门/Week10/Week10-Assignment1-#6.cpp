#include <iostream>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int num[(n + m)];
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	for (int i = n + m - 1; i >= 0; i--) {
		if (i >= m) {
			num[i] = num[i - m];
		} else {
			num[i] = num[n + i];
		}
	}
	for (int i = 0; i < n; i++) {
		cout << num[i] << " ";
	}
	cout << endl;
	return 0;
}
