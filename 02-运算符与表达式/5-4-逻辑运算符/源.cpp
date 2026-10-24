#include<iostream>
using namespace std;
//逻辑运算符
/*
* 与：&&  全真才为真
* 或：||  有一个真就为真
* 非：！  假就为真
*/
int main() {
	//与运算
	cout << (0 && 0) << endl;
	cout << (0 && 1) << endl;
	cout << (1 && 0) << endl;
	cout << (1 && 1) << endl;
	cout << "------" << endl;

	//或运算
	cout << (0 || 0) << endl;
	cout << (0 || 1) << endl;
	cout << (1 || 0) << endl;
	cout << (1 || 1) << endl;
	cout << "------" << endl;
	
	//非运算
	cout << !0 << endl;
	cout << !1 << endl;

	//嵌套运算
	int a = !(1 || 1 && 0);//运算符优先级：no  and  or 
	cout << a << endl;
	
	return 0;
}