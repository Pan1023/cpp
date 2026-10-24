#include<iostream>
using namespace std; 
/*老师和学生都是"人员"，但存的信息不同：

- 老师（_role = 0 ）：存 所教课程course
- 学生（_role = 1 ）：存 分数score
两者不会同时需要，所以用联合体 共用一块内存 ，省空间。*/
struct Info {
	char _name[20];
	int _role;
	union {
		double score;
		char course[20];
	}_sc;

	//构造函数：创建对象时自动调用、完成初始化 。
	Info(const char name[20], int role, double s, const char c[20]) {
		strcpy_s(_name, name); 
		_role = role;
		if (s > 0) _sc.score = s;
		if (strlen(c) > 0) strcpy_s(_sc.course, c);
	}
};
int main() {
	Info a[4]={
		Info("周老师",0,-1,"c++"),
		Info("周老师",0,-1,"py"),
		Info("周同学",1,90,""),
		Info("肖同学",1,88,""),
	};
	for (int i = 0; i < 4; ++i) {
		if (a[i]._role == 0) {
			cout << a[i]._name << "是一位老师，他是教" << a[i]._sc.course << "的" << endl;
		}
		else if (a[i]._role == 1) {
			cout << a[i]._name << "是一位学生，他的分数是" << a[i]._sc.score  << endl;
		}
	}
	return 0;
}