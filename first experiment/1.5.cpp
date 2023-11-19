#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double a;
    double b;
    cout << "请输入华氏温度: ";
    cin >> a;
    b = (a - 32) * 5 / 9;
    cout << "摄氏温度为 " << fixed << setprecision(2) << b << "℃" << endl;
    return 0;
}
