#include<iostream>
using namespace std;
//实参 （实际参数）：函数 调用 时括号里的参数（提供数据的"实际值"）
//形参 （形式参数）：函数 定义 时括号里的参数（接收数据的"占位符"）
//判断：看到括号 → 这个括号是在"定义"函数还是"调用"函数？定义=形参，调用=实参
void swap(int a, int b) {
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "--" << endl;
	int t = a;
	a = b;
	b = t;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "--" << endl;
}
//值传递：把实参的值拷贝一份给形参，函数中改变的是副本，不影响实参
int main() {
	int a = 6;
	int b = 9;
	swap(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "--" << endl;
	return 0;  
}