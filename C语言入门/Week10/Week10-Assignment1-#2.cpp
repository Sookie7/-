#include <iostream>
#include <cstdlib> 
using namespace std;

int main(){ 
	int i = 0;
	char result;
	char s1[80] = {}, s2[80] = {};
	cin.getline(s1,80);
	cin.getline(s2,80);

	while (s1[i] != '\0' && (abs(s1[i] - s2[i]) == ('a'- 'A') || (s1[i] == s2[i])) ){
	    i++;
	}
	if (s1[i] >= 'a' && s1[i] <= 'z')
	{
		s1[i] -= ('a'-'A');
	}

	if (s2[i] >= 'a' && s2[i] <= 'z')
	{
		s2[i] -= ('a'-'A');
	}
	if (s1[i] > s2[i]) {
	    result = '>';
	} else if (s1[i] < s2[i]) {
	    result = '<';
	} else{
	    result = '=';
	}
	cout << result << endl;
	return 0;
}