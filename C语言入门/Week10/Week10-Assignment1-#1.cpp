#include <iostream>
using namespace std;

int main(){
	char s[80];
	cin.getline(s,80);
	int count[5] = {};
	for (int i = 0; s[i] != '\0'; i++) {
		if(s[i] == 'a') {
			count[0]++;
		}else if(s[i] == 'e') {
			count[1]++;
		}else if(s[i] == 'i') {
			count[2]++;
		}else if(s[i] == 'o') {
			count[3]++;
		}else if(s[i] == 'u') {
			count[4]++;
		}
	}
	for (int i = 0; i < 5; i++) {
		if (i < 4) {
			cout << count[i] << " ";
		} else {
			cout << count[i] << endl;
		}
	}
	return 0;
}