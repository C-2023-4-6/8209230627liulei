#pragma once
class Student              
{
public:                
	void display();
	void set_value(int m_num,const char* m_name, char m_sex);
private:
	int num;
	char name[20];
	char sex;

};
