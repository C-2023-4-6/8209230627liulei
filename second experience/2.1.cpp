#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "����һ���ַ�: ";
    cin >> ch;
    if (ch>='a'&& ch<='z')
    {
        char CH = ch-32;
        cout << "ת��Ϊ��д��ĸ: " << CH << endl;
    }
    else {
        cout << "Ϊ��д��ĸ�������ַ���ASCII��ֵΪ: " << static_cast<int>(ch + 1) << endl;
    }

    return 0;
}