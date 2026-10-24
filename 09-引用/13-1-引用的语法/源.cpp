#include<iostream>
using namespace std;
//引用：给变量取个别名
//数据类型&变量名=变量

//给数组起别名

//当变量名很长时 用引用起别名
void test() {
	int a_very_very_very_very_very_very_very_long_array[8] = { 1,1 };
	for (int i = 2; i < 8; ++i) {
		a_very_very_very_very_very_very_very_long_array[i] = a_very_very_very_very_very_very_very_long_array[i - 1] * a_very_very_very_very_very_very_very_long_array[i - 1] + a_very_very_very_very_very_very_very_long_array[i - 2] * a_very_very_very_very_very_very_very_long_array[i - 2];
	}
	for (int i = 0; i < 8; ++i) {
		cout << a_very_very_very_very_very_very_very_long_array[i] << "  ";
	}
	for (int i = 2; i < 8; ++i) {
		a_very_very_very_very_very_very_very_long_array[i] = 0;
	}
	cout << endl;
	for (int i = 2; i < 8; ++i) {
		int pre1 = a_very_very_very_very_very_very_very_long_array[i - 1];
		int pre2 = a_very_very_very_very_very_very_very_long_array[i - 2];
		int &now = a_very_very_very_very_very_very_very_long_array[i];
		now = pre1 * pre1 + pre2 * pre2;
	}
	for (int i = 0; i < 8; ++i) {
		cout << a_very_very_very_very_very_very_very_long_array[i] << "  ";
	}
}
int main() {
	//给变量起别名
	//1.引用
	
	int a = 520;
	int& b = a;
	b = 1314;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "---" << endl;
	//2.指针
	int c = 520;
	int* d = &c;
	*d = 1314;
	cout << "c=" << c << endl;
	cout << "d=" <<*d << endl;

	test();
	return 0; 
}