#include <iostream>
using namespace std;
int allpeaches(int day)
{
	int peaches;
	if (day == 10)
		peaches = 1;
	else
		peaches = (allpeaches(day + 1) + 1) * 2;
	return peaches;
}
int main()
{
	cout << "�ܵ���������Ϊ" << allpeaches(1) << endl;
	return 0;
}