#include <iostream>
using namespace std;
int main()
{
	int a, b,x,y;
	cout << "�����������������Լ������С������" << endl;
	cin >> a >> b;
	x = a < b ? a : b;
	for (x;x >= 1;x--)
	{
		if (a % x == 0 && b % x == 0)
			break;
	}
	cout << "���Լ��Ϊ" << x << endl;
	y = a * b/x;
	
	cout << "��С������Ϊ" << y << endl;
	return 0;
}
