#include <iostream>
#include "student.h"
using namespace std;
void Student::display()      
{
    cout << "num£º"<< num << endl;
    cout << "name:" << name << endl;
    cout << "sex£º" << sex << endl;
}
void Student::set_value(int m_num,const char* m_name, char m_sex) {
    num = m_num;
    strncpy_s(name, m_name, 20);
    name[19] = '\0';
    sex = m_sex;
}
int main()
{
    Student stud;                
    stud.set_value(007, "tcg", 'm');
    stud.display();             
    return 0;
}

