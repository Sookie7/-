#include <iostream>
using namespace std;

int main() { 
	int L, M;
	cin >> L >> M;
	int ground[M][2];
	for (int i = 0; i < M; i++) {
		cin >> ground[i][0] >> ground[i][1];
	}
	for (int i = 0; i < M ; i++) {
		for (int j = i + 1; j < M; j++) {

			if (ground[i][0] ==0 && ground[i][1] == 0)
			{
				continue;
			}
			if (ground[i][0] >= ground[j][0] &&
				ground[i][1] <= ground[j][1]) {
				ground[i][0] = ground[i][1] = 0;
			} else if (ground[i][0] <= ground[j][0] &&
				ground[i][1] >= ground[j][1]) {
				ground[j][0] = ground[i][0];
				ground[j][1] = ground[i][1];
				ground[i][0] = ground[i][1] = 0;
			} else if (ground[i][0] >= ground[j][0] &&
				ground[i][0] <= ground[j][1] &&
				ground[i][1] >= ground[j][1]) {
				ground[j][1] = ground[i][1];
				ground[i][0] = ground[i][1] = 0;
			}else if (ground[i][0] <= ground[j][0] &&
				ground[i][1] >= ground[j][0] &&
				ground[i][1] <= ground[j][1]) {
				ground[j][0] = ground[i][0];
				ground[i][0] = ground[i][1] = 0;
			} 
		}
	}
	int remain = L + 1;
	for (int i = 0; i < M; i++) {
		if (ground[i][0] ==0 && ground[i][1] == 0) {
				continue;
		}
		remain -= (ground[i][1] - ground[i][0] + 1);
	}
	cout << remain << endl;
	return 0;
}