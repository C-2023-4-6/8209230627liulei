#include <iostream>
using namespace std;
class Point {
private:
	int x, y;
public:
	Point(int m, int n) {
		x = m;
		y = n;
	}
	void setPoint(int i, int j) {
		x = i + 60;
		y = j + 80;
	}
	void display() {
		cout << "×ø±êÎª:£¨" << x << "," << y << ")" << endl;
	}
};
int main()
{
	Point p(60, 80);
	p.display();
	p.setPoint(10, 20);
	p.display();
	return 0;
}