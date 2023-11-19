#include <iostream>
using namespace std;
int main()
{
    const double pai = 3.1415926;
    double a, b, c;
    cout << "请输入圆锥底的半径：";
    cin >> a;
    cout << "请输入圆锥的高：";
    cin >> b;
    c = (pai * a * a * b) / 3;
    cout << "圆锥的体积为：" << c << endl;

    return 0;
}
