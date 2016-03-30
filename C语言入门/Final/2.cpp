#include <iostream>
using namespace std;

int main() {
	int num;
	while(cin>>num) {

		int result[3];
		int i = 0;
		if (num % 3 == 0) {
			result[i] = 3;
			i++;
		}
		if (num % 5 == 0) {
			result[i] = 5;
			i++;
		}

		if (num % 7 == 0) {
			result[i] = 7;
			i++;
		}
		if (i == 0) {
			cout << "n" ;
		} else {
			for (int j = 0; j < i; j++) {
				cout << result[j] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}


