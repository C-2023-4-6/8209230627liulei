#include <iostream>
using namespace std;
class Time {
private:
	int hour;
	int minute;
	int sec;
public:
	void settime(int h,int m,int s) {
		hour = h;
		minute = m;
		sec = s;

	}
	void inputtime() {
		cin >> hour >> minute >> sec;
	}

	void showtime() {
		cout << hour << ":" << minute << ":" << sec;

	}

};
int main()
{
	Time m_time;
	m_time.inputtime();
	m_time.showtime();
	return 0;
}