#include<iostream>
using namespace std;
/*
	1.返回值类型
	2.函数名
	3.参数列表
	4.函数体
	5.return 表达式

返回值类型 函数名(参数列表){
	函数体
	return 表达式
}
*/
/*函数的意义
*	1.代码复用
*	2. 模块化（分而治之）
把大问题拆成小问题，每个函数只做一件事
	3. 可读性
函数名就是"注释"，一眼看懂在干什么。sort(a, n)比写一整段冒泡排序好懂多了

*/
int add(int a, int b) {
	return a + b;
}
int max(int a, int b) {
	return a > b ? a : b;
}
int sum(int n) {
	return(1 + n) * n / 2;
}
int main() {
	//1.加法的调用
	int ret = add(1, 7);
	cout << ret << endl;
	cout << add(add(1,7),9) << endl;

	//2.max的调用
	cout << max(9, 1) << endl;

	//3.1到n求和
	int n;
	cin >> n;
	int d = sum(n);
	cout << d << endl;
	return 0;
}