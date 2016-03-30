#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str[10];
	char substr[3];
	// cin.getline(str,11,' ');
	// cin.getline(substr,4);
	while (cin >> str >> substr) {

		char max = 0;
		int str_length;
		if (strlen(str) > 10) {
			str_length = 10;
		} else {
			str_length = strlen(str);
		}
		int substr_length;
		if (strlen(substr) > 3) {
			substr_length = 3;
		} else {
			substr_length = strlen(str);
		}

		for (int i = 0; i < str_length; i++) {
			if (str[i] > str[max] ) {
				max = i;
			}
		}
		char result[13];
		for (int i = 0; i <= max; i++)
		{
			cout << str[i];

		}
		for (int i = 0; i < 3; i++) {
			cout << substr[i];
		}
		for (int i = max + 1; i < substr_length; i++) {
				cout << str[i];
		}

		cout << endl;
	}
	return 0;
}
