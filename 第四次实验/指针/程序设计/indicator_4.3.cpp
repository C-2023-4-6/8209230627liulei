#include <iostream>
using namespace std;
void sortarray(int* arr, int size)
{
	for (int i = 0;i < size - 1;i++)
		for (int j = 0;j < size - 1 - i;j++)
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}

}
int main()
{
	int size;
	cout << "please enter the size of the array";
	cin >> size;
	int* arr = new int[size];
	cout << " please enter the elements of the array: ";
	for (int i = 0;i < size;i++)
		cin >> arr[i];
	sortarray(arr, size);
	for (int i = 0;i < size;i++)
		cout<<arr[i]<<""<<endl;
	delete[]arr;
	return 0;
}