#include <iostream>
using namespace std;
int main()
{
	int a = 0, b = 0, c = 0, d = 0;
	char e;
	cout << "������" << endl;
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
	cout << "Ӣ����ĸ������" <<a << endl;
	cout << "�ո������" << b<< endl;
	cout << "�����ַ�������" << c << endl;
	cout << "�����ַ�������" << d << endl;
	return 0;
}

