#include <iostream>
using namespace std;
int yin(int& rem, int& ren) {
	int result;
	int i = rem < ren ? rem : ren;
	for (i;i >= 1;i--)
	{
		if (rem % i == 0 && ren % i == 0)
		{
			result = i;
			break;
		}
	}
	return result;
}
int bei(int& rem, int& ren)
{
	int result;
	int i, c;
	c = rem < ren ? ren : rem;
	for (i = c;i <= rem * ren;i++)
	{
		if (i % rem == 0 && i % ren == 0)
		{
			result = i;break;
		}
	}

	return result;
}
int main()
{
	int a, b, c, d;
	cout << "please input two numbers" << endl;
	cin >> a >> b;
	c = yin(a, b);
	d = bei(a, b);
	cout << "a，b最大公因数为" << c << endl << "a,b最小公倍数为" << d << endl;
	return 0;
}