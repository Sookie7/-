/*********************************************
5:二维数组右上左下遍历
查看 提交 统计 提问
总时间限制: 1000ms 内存限制: 65536kB
描述
给定一个row行col列的整数数组array，要求从array[0][0]元素开始，按从左上到右下的对角线顺序遍历整个数组。



输入
输入的第一行上有两个整数，依次为row和col。
余下有row行，每行包含col个整数，构成一个二维整数数组。
（注：输入的row和col保证0 < row < 100, 0 < col < 100）
输出
按遍历顺序输出每个整数。每个整数占一行。
样例输入
3 4
1 2 4 7
3 5 8 10
6 9 11 12
样例输出
1
2
3
4
5
6
7
8
9
10
11
12
*********************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int row,col;
	cin >> row >> col;
	int array[100][100];
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			cin >> array[i][j];
		}
	}

	for (int i = 0; i < col - 1 + row; i++) {
		int (*p)[100] = array;
		int temp_row = 0;
		int temp_col;
		if (i < col - 1) {
			temp_col = i;
		} else {
			temp_col = col - 1;
			temp_row =  i - temp_col;
		}
		while((temp_row <= row - 1) && temp_col >= 0){
			cout << *(*(p + temp_row) + temp_col )<< endl;
			temp_col-- ;
			temp_row++;
		}
	}
	return 0;
}


