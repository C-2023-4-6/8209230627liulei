#include <iostream>
using namespace std;
bool is_prime(int num) {
	int t = num; 
	int a;
	int flag=0;
	if (t == 2)
		return true;
	else
	{
		for (int i = 2;i < t;i++)
		{
			a = t % i;
			if (a == 0)
				flag++;
				break;
		}
		if (flag == 0)
			return true;
		else
			return false;
	}
}

int main() {
	int c = 0; 
	int num = 2;  

	while (c < 200) {
		if (is_prime(num)) {
			cout << num << " ";
			c++;
			if (c % 10 == 0)
				cout << endl;
		}
		num++;
	}

	return 0;
}