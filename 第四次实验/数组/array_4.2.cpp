#include <iostream>
using namespace std;
void swap(double *arr, int len) {
	for (int i = 0;i < len - 1;i++) {
		for (int b = 0;b < len - i - 1;b++) {
			if (arr[b] > arr[b + 1]) {
				double t = arr[b];
				arr[b] = arr[b + 1];
				arr[b + 1] = t;
			}		
		}
	}
}
void print(double* arr, int len) {
	for (int i = 0;i < len;i++)
	{
		cout << arr[i]<<endl;
	}
}
int main()
{
	cout << "请输入十个数字，进行排序" << endl;
	double arr[10];
	for (int m = 0;m < 10;m++)
		cin >> arr[m];
	swap(arr, 10);
	print(arr, 10);	
	return 0;
}