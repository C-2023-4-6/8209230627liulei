#include <iostream> 
using namespace std;
int main()
{
	double a = 0.8;
	double b = 0;
	double c = 1;
	double d = 2;
	for (;d < 100;c++)
	{
		b = b + d;
		d = d * 2;
	}
	double e = b * 0.8 / (c - 1);
	cout << "平均每天花费" << e << endl;
	return 0;
}

