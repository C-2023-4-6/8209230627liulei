#include <iostream>
using namespace std;
int main() {
    char ch;
    cout << "输入一个字符: ";
    cin >> ch;
    if (ch>='a'&& ch<='z')
    {
        char CH = ch-32;
        cout << "转换为大写字母: " << CH << endl;
    }
    else {
        cout << "为大写字母，其后继字符的ASCII码值为: " << static_cast<int>(ch + 1) << endl;
    }

    return 0;
}