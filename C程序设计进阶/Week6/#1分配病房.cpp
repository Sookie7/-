/*********************************************************
总时间限制: 1000ms 内存限制: 65536kB
描述
某个科室的病房分为重症和普通，只有当病人的疾病严重程度超过了入住重症病房的最低严重值，才可以安排入住重症病房。 
现在要求设计一个程序，给病人安排好病房。疾病的严重程度用0到10来表示，0表示小毛病，10表示非常严重。

输入
第一行输入病人的个数m(m < 50)，以及安排住入重症病房的最低严重值a
紧接着m行，每行表示病人编号（三个位，用0补齐）及其疾病的严重程度（浮点数，1位小数）。
每个病人的疾病严重程度都不一样。
输出
要求按照病人的严重程度输出住在重症病房里的病人的编号

注意：
如果当前所有病人的严重程度并不满足住在重症病房里，则输出“None.”（不包括引号）
样例输入
10 7.55
006 6.5
005 8.0
004 3.5
009 8.5
011 7.0
043 9.5
003 5.0
103 6.0
112 4.0
118 9.0
样例输出
043 9.5
118 9.0
009 8.5
005 8.0
**********************************************************/
#include <iostream>
#include <iomanip>

using namespace std;
struct Patient {
	int number;
	float rate;
};
int main(){
	int total;
	float level;
	cin >> total >> level;
	struct Patient patients[total];
	for (int i = 0; i < total; i++) {
		cin >> patients[i].number >> patients[i].rate;
	}
	int flag = -1;
	for (int i = 0; i < total; ++i) {
		for (int j = i + 1; j < total; j ++) {
			if (patients[j].rate > patients[i].rate) {
				struct Patient temp;
				temp = patients[i];
				patients[i] = patients[j];
				patients[j] = temp;
			}
		}
		if (patients[i].rate > level)
		{
			flag = i;
		}
	}
	if (flag >= 0) {
		for (int i = 0; i <= flag; ++i) {
			cout << setw(3) << setfill('0') << patients[i].number;
			cout << " ";
			 cout.setf(ios::fixed,ios::floatfield);
		     cout.precision(1);
			cout << patients[i].rate <<endl;
		}
	} else {
		cout << "None." << endl;
	}
	return 0;
} 