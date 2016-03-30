#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
	int num;
	cin >> num;
	double dis[num][2];
	for (int i = 0; i < num; ++i)
	{
		cin >> dis[i][0] >> dis[i][1];
	}
	double max = 0;
	for (int i = 0; i < num - 1; i++) {
		for (int j = i + 1; j < num; j++) {
			double x = fabs(dis[j][0] - dis[i][0]);
			double y = fabs(dis[j][1] - dis[i][1]);

			if ((x * x + y * y) > max) {
				max = x * x + y * y;
			}
 		}
	}
	cout << fixed << setprecision(4) << sqrt(max ) << endl;
	return 0;
}