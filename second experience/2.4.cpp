#include <iostream>
using namespace std;
int main()
{
	double a, b;
	char ch;
	cout << "������a��b���������������" << endl;
	cin >> a >> b>>ch;
	if(ch=='*')
		cout << a * b << endl;
	else if (ch == '/')
	{
		if(b==0)
			cout << "��������Ϊ��" << endl;
		else
			cout << a / b << endl;
	}
	else if (ch == '%')
	{
		if (b == 0)
			cout << "��������Ϊ��" << endl;
		else
			cout << static_cast<int>(a) % static_cast<int>(b) << endl;
	}
	else if(ch=='+')
		cout << a + b << endl;
	else if(ch=='-')
		cout << a - b << endl;
	else
		cout << "������������" << endl;
	return 0;
}