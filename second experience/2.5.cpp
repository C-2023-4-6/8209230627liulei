#include <iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	char e;
	cout << "请输入" << endl;
	while ((e = getchar()) != '\n')
	{
		if ((e >= 'a' && e <= 'z') || (e <= 'Z' && e >= 'A'))
			a++;
		else if (e == ' ')
			b++;
		else if (e >= '0' && e <= '9')
			c++;
		else
			d++;
	}
	cout << "英文字母个数：" <<a << endl;
	cout << "空格个数：" << b<< endl;
	cout << "数字字符个数：" << c << endl;
	cout << "其他字符个数：" << d << endl;
	return 0;
}

