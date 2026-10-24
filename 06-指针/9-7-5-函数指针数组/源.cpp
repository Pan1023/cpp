#include<iostream>
using namespace std;
//函数指针数组：[函数指针1，函数指针2....]

//两种定义函数指针数组的方法：
typedef void (*fptrs[])(int a, int b, double c, float d, char e);
typedef void (*fptr)(int a, int b, double c, float d, char e);

void func1(int a, int b, double c, float d, char e) {
	cout << "func1" << endl;
}
void func2(int a, int b, double c, float d, char e) {
	cout << "func2" << endl;
}
void func3(int a, int b, double c, float d, char e) {
	cout << "func3" << endl;
}
int main() {
	fptrs fps = { func1,func2,func3 };
	cout << fps[0] << endl;
	cout << fps[1] << endl;
	cout << fps[2] << endl;
	cout << fps[3] << endl;

	fptr fps1[] = {func1,func2,func3};
	cout << fps1[0] << endl;
	cout << fps1[1] << endl;
	cout << fps1[2] << endl;
	cout << fps1[3] << endl;

	return 0;
}