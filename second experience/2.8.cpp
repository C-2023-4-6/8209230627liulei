#include <iostream>
#include <math.h>
using namespace std;
double dou(double a, double pre)
{
    if (a < 0)
    {
        cout<< "无法对负数取平方根" << endl;
        return NAN;
    }
    double m = a;
    double n = m;
    while (1)
    {
        double die = (n + a / n)/2; 
        double cha =fabs(die - n); 
        if (cha < pre)
        {
            break; 
        }

        n = die;
    }

    return n;
}

int main()
{
    double a;
    cout << "输入数：";
    cin >> a;

    double pre = 1e-10;

    double result = dou(a, pre);

    if (!isnan(result))
    {
        cout << a << " 的平方根：" << result << endl;
    }

    return 0;
}
