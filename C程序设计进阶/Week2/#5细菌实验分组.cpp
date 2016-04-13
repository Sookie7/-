/*******************************************************************************
编程题＃5：细菌实验分组

注意： 总时间限制: 1000ms 内存限制: 65536kB

描述

有一种细菌分为A、B两个亚种，它们的外在特征几乎完全相同，仅仅在繁殖能力上有显著差别，A亚种繁殖能力非常强，B亚种的繁殖能力很弱。在一次为时一个 小时的细菌繁殖实验中，实验员由于疏忽把细菌培养皿搞乱了，请你编写一个程序，根据实验结果，把两个亚种的培养皿重新分成两组。

输入

输入有多行，第一行为整数n（n≤100），表示有n个培养皿。

其余n行，每行有三个整数，分别代表培养皿编号，试验前细菌数量，试验后细菌数量。

输出

输出有多行：

第一行输出A亚种培养皿的数量，其后每行输出A亚种培养皿的编号，按繁殖率升序排列。

然后一行输出B亚种培养皿的数量，其后每行输出B亚种培养皿的编号，也按繁殖率升序排列。

样例输入

5
1 10 3456
2 10 5644
3 10 4566
4 20 234
5 20 232
样例输出

3
1
3
2
2
5
4
提示

亚种内部细菌繁殖能力差异 远远小于 亚种之间细菌繁殖能力差异。

也就是说，亚种间任何两组细菌的繁殖率之差都比亚种内部两组细菌的繁殖率之差大。
*******************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    
    int n;
    cin >> n;
    int ID[n];
    float rate[n];
    
    for (int i = 0; i < n; i++) {
        int before, after;
        cin >> ID[i] >> before >> after;
        rate[i] = (float)after / before;
    }
    
    for (int i = 0; i  < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (rate[i] > rate[j]) {
                int tmp_rate = rate[i];
                rate[i] = rate[j];
                rate[j] = tmp_rate;
                int tmp_number = ID[i];
                ID[i] = ID[j];
                ID[j] = tmp_number;
            }//end if
        }//end for j
    }//end for i

    int max_gap = 0, sign_gap;
    for (int i = n- 1; i > 0; i--) {
        if(rate[i] - rate[i - 1] > max_gap) {
            max_gap = rate[i] - rate[i - 1];
            sign_gap = i;
        }
    }

    cout << n - sign_gap << endl;
    for (int i = sign_gap; i < n; ++i) {
        cout << ID[i] << endl;
    }

    cout << sign_gap << endl;
    for (int i = 0; i < sign_gap; ++i) {
        cout << ID[i] << endl;
    }

	return 0;
}