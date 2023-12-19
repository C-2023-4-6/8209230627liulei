#include <iostream>
using namespace std;
class Students {
private:
	int studentsid;
	int score;
public:
	Students(int id, int s) {
		studentsid = id;
		score = s;
	}
	int getstudentid() {
		return studentsid;
	}
	int geetstudentscore() {
		return score;
	}
};
int max(Students* student, int size) {
	int maxscore = student[0].geetstudentscore();
	int maxid = 0;
	for (int i = 0;i < size;i++) {
		if (maxscore < student[i].geetstudentscore()) {
			maxscore = student[i].geetstudentscore();
			maxid = i;
		}
	}
	return student[maxid].getstudentid();
}

int main()
{
	const int size = 5;
	Students students[size] = {
		Students(1,90),
		Students(2,92),
		Students(3,99),
		Students(4,67),
		Students(5,89),
	};
	int maxstudentid = max(students, size);
	cout << "最高成绩的学号是" << maxstudentid << endl;
}
