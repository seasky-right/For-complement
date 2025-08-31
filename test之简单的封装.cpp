#include <iostream>
using namespace std;

class Student {
public:
	string name;
	int number;
};

int main() {
	Student stu[3];
	for (int i = 0; i < 3; i++) {
		cout << "请输入第" << i + 1 << "个学生的姓名：";
		cin >> stu[i].name;
		cout << "请输入第" << i + 1 << "个学生的学号：";
		cin >> stu[i].number;
	}
	cout << "学生信息如下：" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "姓名：" << stu[i].name << ", 学号：" << stu[i].number << endl;
	}

	system("pause");
	return 0;

}

