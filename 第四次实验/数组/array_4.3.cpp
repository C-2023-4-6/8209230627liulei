#include <iostream>
using namespace std;
int main()
{
	const int a = 100;
	bool lockers[a];
	for (int i = 0;i < 100;i++)
	{
		lockers[i] = false;
	}
	for (int b = 1;b <= 100;b++)
	{
		for (int c = b - 1;c < 100;c += b)
			lockers[c] = !lockers[c];
	}
	cout << "开着的柜子的号码：";
	for (int d = 0; d < 100; d++) 
	{
		if (lockers[d]==true) 
		{
			cout << d + 1 << " "<<endl;
		}
	}
	return 0;

}