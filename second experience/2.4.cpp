#include <iostream>
using namespace std;
int main()
{
	double a, b;
	char ch;
	cout << "请输入a与b和运算符进行运算" << endl;
	cin >> a >> b>>ch;
	if(ch=='*')
		cout << a * b << endl;
	else if (ch == '/')
	{
		if(b==0)
			cout << "除数不能为零" << endl;
		else
			cout << a / b << endl;
	}
	else if (ch == '%')
	{
		if (b == 0)
			cout << "除数不能为零" << endl;
		else
			cout << static_cast<int>(a) % static_cast<int>(b) << endl;
	}
	else if(ch=='+')
		cout << a + b << endl;
	else if(ch=='-')
		cout << a - b << endl;
	else
		cout << "运算符输入错误" << endl;
	return 0;
}