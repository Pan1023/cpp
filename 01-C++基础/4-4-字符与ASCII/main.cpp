#include<iostream>
using namespace std;
//总结：
//字符与数字的关系:char 本质就是整数类型，存 ASCII 编号；用单引号' '只是给它赋字符形式的字面量。

int main() {
	char a= 'y';
	char b = 'z';
	//char a= "y";char a= 'yy';都不能正常表示
	//“”表示是字符串，会报错
	//‘’里面只能有一个字符
	cout << a << endl;
	//一个字节=八位，共2e8（256）种情况，所对应是ascII码
	cout << (int)a << endl; //强制转int，输出ASCII码
	cout << (int)b<< endl;
	cout << b-a<< endl;//C++ 规则：两个char做算术运算，不会以 char 类型计算，会自动提升成 int。
	//若要表示为ASCII 码 =1：cout << (char)（b-a）<< endl;
	b = 120;
	cout << b << endl;
	char c = 119;
	cout << c << endl;
	return 0;
}