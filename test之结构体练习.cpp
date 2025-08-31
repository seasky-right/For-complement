#include <iostream>
#include <ctime> 
using namespace std;

struct Student {
	string sname;
	int age;
	double score;
};

struct Teacher {
	string tname;
	struct Student sArr[5];
};

void printTeacherInfo(const Teacher *tArr ,int size) {
	for (int i = 0; i < size; i++) {
		cout << "Teacher Name: " << tArr[i].tname << endl;
		for (int j = 0; j < 5; j++) {
			cout << "\tStudent " << j + 1 << ": " << tArr[i].sArr[j].sname
				<< ", Age: " << tArr[i].sArr[j].age
				<< ", Score: " << tArr[i].sArr[j].score << endl;
		}
	}
}

int main() {

	srand(time(0));

	Teacher tArr[3];
	int size = sizeof(tArr) / sizeof(tArr[0]);

	string Names = "ABCDE";
	for (int i = 0; i < size; i++) {
		tArr[i].tname = "teacher_";
		tArr[i].tname += Names[i];
		for (int j = 0; j < 5; j++) {
			tArr[i].sArr[j].sname = "student_";
			tArr[i].sArr[j].sname += Names[j];
			int random1 = rand() % 61 + 40;
			tArr[i].sArr[j].score = random1;
			int random2 = rand() % 5 + 17;
			tArr[i].sArr[j].age = random2;
		}
	}

	printTeacherInfo(tArr, size);

	system("pause");
	return 0;

}
