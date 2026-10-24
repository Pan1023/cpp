#include<iostream>
using namespace std;
//逗号运算符:优先级特别 低
//逗号表达式规则：从左往右依次执行，整个逗号表达式的值是最右边表达式的值。
//逗号运算符：把多个表达式拼成一个表达式，从左到右逐个执行，最终取最右边表达式的值作为整体结果。
/*
	int a = 3, b;
	b = (a++, a *= 2, a + 1);
	cout << b << endl;//b=9

	int a = 3, b;
	b = a++, a *= 2, a + 1;
	cout << b;///b=3

	b=(++a, a*2, a+1);//b=5
*/
int main() {
	int a = 1,b=1;
	//逗号运算符优先级比赋值还低！
	a = -1, 17, 14;//等于(a = -1), 17, 14;
	b = (-1, 17, 14);
	cout << a << endl;
	cout << b << endl;

	//案例
	int x = 4;
	int y = 5;
	int tmp = x;
	x = y;
	y = tmp;
	cout << x << ' ' << y << endl;
	tmp = x,x = y,y = tmp;
	cout << x << ' ' << y << endl;
	return 0;
}