#include <iostream>
#include <math.h>
using namespace std;
double dou(double a, double pre)
{
    if (a < 0)
    {
        cout<< "�޷��Ը���ȡƽ����" << endl;
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
    cout << "��������";
    cin >> a;

    double pre = 1e-10;

    double result = dou(a, pre);

    if (!isnan(result))
    {
        cout << a << " ��ƽ������" << result << endl;
    }

    return 0;
}
