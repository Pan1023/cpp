#include<iostream>
using namespace std;
//函数的声明
int add(int , int );
void func1(int x);
void func2(int x);
//有什么用
//func1 依赖func2 ，func2 又依赖func1 ，无论谁写前面，都会遇到"对方还没定义"的问题。
// 提前声明就能解决。
/*
	函数声明的作用： 
	让编译器提前知道函数的签名（返回值、名字、参数），
	从而可以在函数定义之前就调用它 ，
	也解决了函数互相调用的依赖问题
*/
void func1(int x) {
	if (x <= 0) {
		return;
	}
	cout << "func1:" << x << endl;
	func2(x-1);
}
void func2(int x) {
	cout << "func2:" << x << endl;
	func1(x-1);
}
int main() {
	int x, y;
	cin >> x >> y;
	int z = add(x, y);
	cout << z << endl;

	func1(10);
	return 0;
}
int add(int a, int b) {
	return a + b;
}