#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	while (N!=0) {
	
		int num [N];
		for(int i = 0; i < N; i++) {
			cin >> num[i];
		}

		for (int i = 0; i <= N / 2; i++) {
			for (int j = i + 1; j < N; j++) {
				if(num[i] < num[j]) {
					int temp = num[i];
					num[i] = num[j];
					num[j] = temp;
				}
			}
		}
		if (N == 1) {
			cout << num[0] <<endl;
		} else if (N % 2 == 0) {
			cout << (num[N/2 - 1] + num[N/2]) / 2 << endl;
		} else {
			cout << num[(N-1)/2] << endl;
		}
		cin >> N;
	}
	return 0;
}