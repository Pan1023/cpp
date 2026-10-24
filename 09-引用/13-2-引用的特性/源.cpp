#include<iostream>
using namespace std;
//引用特性：1.必须初始化 2.初始化后无法修改
//使得引用比指针更安全
int main() {
	//1.必须初始化
	// 错误：int& a;
	
	//2.初始化后无法修改
	int a = 4, c = 6;
	int& b = a;
	b = c;//等于b=6;
	cout << a << b << c;
	return 0;
}