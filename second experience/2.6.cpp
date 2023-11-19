#include <iostream>
using namespace std;
int main()
{
	int a, b,x,y;
	cout << "请输入两个数求最大公约数和最小公倍数" << endl;
	cin >> a >> b;
	x = a < b ? a : b;
	for (x;x >= 1;x--)
	{
		if (a % x == 0 && b % x == 0)
			break;
	}
	cout << "最大公约数为" << x << endl;
	y = a * b/x;
	
	cout << "最小公倍数为" << y << endl;
	return 0;
}
