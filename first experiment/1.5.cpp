#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double a;
    double b;
    cout << "�����뻪���¶�: ";
    cin >> a;
    b = (a - 32) * 5 / 9;
    cout << "�����¶�Ϊ " << fixed << setprecision(2) << b << "��" << endl;
    return 0;
}
