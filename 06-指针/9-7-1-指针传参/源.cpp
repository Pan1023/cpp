#include<iostream>
using namespace std;
//函数值传递
void swap(int a, int b) {
	int t = a;
	a = b;
	b = t;
	cout << "调用函数中的a地址：" << &a << endl;
	cout << "调用函数中的b地址：" << &b << endl;
}
//函数的址传递
void swap1(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
	cout << "调用函数中的a地址：" << a << endl;
	cout << "调用函数中的b地址：" << b << endl;
}
/*
&x = 问“x 的房间号”
*p = 按“纸条上的房间号”找上门
*/
int main() {
	int a = 1;
	int b = 2;
	cout << "调用函数前a的地址：" << &a << endl;
	cout << "调用函数前b的地址：" << &b << endl;
	swap(a, b);
	cout << "调用函数后a的地址：" << &a << endl;
	cout << "调用函数后b的地址：" << &b << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	cout << "调用函数前a的地址：" << &a << endl;
	cout << "调用函数前b的地址：" << &b << endl;
	swap1(&a, &b);
	cout << "调用函数后a的地址：" << &a << endl;
	cout << "调用函数后b的地址：" << &b << endl;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	return 0;
}