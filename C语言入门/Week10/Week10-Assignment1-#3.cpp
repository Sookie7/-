#include <iostream>
using namespace std;

#define MAX 500

int main() {
	char sentence[MAX], sentence_2[MAX];
	cin.getline(sentence,MAX,'.');
	int start = 0;
	int finish = 0;
	int maxlength = 0;
	int sign = 0;
	for (int i = 0; sentence[i] != '\0'; i++) {
		if (sentence[i+1] == ' ' || sentence[i+1] == '\0') {
			finish = i+1;
			if (finish - start > maxlength) {
				maxlength = finish - start;
				sign = start;
			}
			start = finish + 1;
		}
	}

	while (sentence[sign] != ' ' && sentence[sign] != '\0' ) {
		cout << sentence[sign];
		sign ++;
	}
	cout << endl;
	return 0;
}