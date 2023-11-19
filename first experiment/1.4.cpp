#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    unsigned int testUnint = 65534;
    cout << "output in unsigned int type: " << testUnint << endl;
    cout << "output in char type: " << static_cast<char>(testUnint) << endl;
    cout << "output in short type: " << static_cast<short>(testUnint) << endl;
    cout << "output in int type: " << static_cast<int>(testUnint) << endl;
    cout << "output in double type: " << static_cast<double>(testUnint) << endl;
    cout << "output in double type with precision 4: " << setprecision(4) << static_cast<double>(testUnint) << endl;
    cout << "output in Hex unsigned int type: " << hex << testUnint << endl;
    cout << "output in Octal unsigned int type: " << oct << testUnint << endl;
    double a = 10.6;
    int intnumber;
    intnumber= static_cast<int>(a);
    cout << "Converted number to int: " << a << endl;
    return 0;
}