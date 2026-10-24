#include<iostream>
using namespace std;
//表达式1？表达式2：表达式3  唯一的三目运算符
//若表达式1为true,执行表达式2，否则执行表达式3
//右结合：a ? b : c ? d : e==a ? b : ( c ? d : e )
int main() {
	int a = 3, b = 4;
	double c = 5.6;
	int x;
	x = (a > b ? a : b);
	cout << x << endl;

	//条件运算符可以嵌套
	x = ((a > b) ? ((a > c) ? a: c): ((b > c) ? b : c));
	cout << x << endl;

	//条件运算符的值类型取决于里面表达式的值
	cout << ((a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c)) <<endl;
	return 0;
}