#include<iostream>
using namespace std;
//全局区：全局变量，全局常量，字符串常量，静态常量
int a = 1;
int b = 2;
const int ga = 7;
const int gb = 8;
int main(){      
	cout << "全局变量a的地址：" << &a << endl;
	cout << "全局变量b的地址：" << &b << endl;
	cout << "全局常量ga的地址：" << &ga << endl;
	cout << "全局常量gb的地址：" << &gb << endl;
	int c = 3;
	int d = 4;
	cout << "局部变量c的地址：" << &c << endl;
	cout << "局部变量d的地址：" << &d << endl;
	static int e = 5;
	static int f = 6;
	cout << "静态变量e的地址：" << &e << endl;
	cout << "静态变量f的地址：" << &f << endl;
	cout << "字符串常量的地址：" << &"英雄" << endl;
	const int g = 7;
	const int h = 8;
	cout << "局部常量g的地址：" << &g << endl;
	cout << "局部常量h的地址：" << &h << endl;
	return 0;
}