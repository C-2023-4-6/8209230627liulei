#include <iostream> 
using namespace std;
void swap(int num[], int num2[])
{
	int a,b,i;
	int c = 0;
	bool y;
	for (i = 0;i < 10;i++)
	{
		y = true;
		for (a = i + 1;a < 10;a++)
		{
			if (num[i] == num[a])
				y = false;
		}
		if (y)
		{
			num2[c] = num[i];
			c++;
		}
	}
	for (int d = 0;d < c;d++)
		cout << num2[d] << "  ";
}

int main()
{
	int num[10];
	for (int a = 0; a < 10;a++)
	{
		cin >> num[a];
	}
	int abc[10];
	swap(num, abc);
	return 0;
}


