#include <iostream>
using namespace std;
class Volume {
private:
	double length;
	double width;
	double height;
public:
	void cinstatistic(double l,double w,double h) {
		length = l;
		width = w;
		height = h;
		
	}
	double calculations() {
		return length * width * height;
	}
};
int main()
{
	Volume volume[3];
	for (int i = 0;i < 3;i++) {
		double L, W, H;
		cout << "�������" << i + 1 << "�����������:" << endl;
		cin >>L>>W>>H;
		volume[i].cinstatistic(L, W, H);
	}
	for (int m = 0;m < 3;m++) {
		cout << "��" << m + 1 << "�����������:" << volume[m].calculations() << endl;
	}
	return 0;
}