#include<iostream>
using namespace std;
//栈区和堆区都是程序运行过程中申请和释放
//栈区：函数参数，局部变量，const局部常量

//栈区：由操作系统来控制生命周期,自动回收
//堆区：由程序员来控制生命周期，手动释放
char* func() {
	char c[20] = "英雄";
	return c;
}
void test(int a, int b) {
	int c = 3;
	int d = 4;
	const int f = 5;
	cout << "形式参数a的地址：" << &a << endl;
	cout << "形式参数b的地址：" << &b << endl;
	cout << "局部变量c的地址：" << &c << endl;
	cout << "局部变量d的地址：" << &d << endl;
	cout << "const局部常量f的地址：" << &f << endl;


}
int main() {
	cout << func() << endl;
	//为什么变野指针
	//c数组是局部变量，当函数返回时，内存已销毁，所以变成野指针
	
	//所以不要返回局部变量的地址
	test(1, 2);
	return 0;
}