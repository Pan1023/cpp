#include<iostream>
using namespace std;
int main() {
	int a = 6;
	int b = 9;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	cout << a / b << endl;
	cout << a % b << endl;
	cout << a*1.0 / b << endl;

	a = 10000000;
	b = 100000;
	cout << a * b << endl;//越界
	cout <<(long long)a*b << endl;

	a = -1;
	b = 2;
	cout << a / b << endl;//整数运算不是向下取整，而是把小数部分截断

	a = +6;
	b = -a;
	int c = -( - a);//c = --a;是自减
	cout << a << ' ' << b << ' ' << c << ' ' << endl;

	char A = 'A';
	A = A + 1;
	//A = A + 1;
	cout << A << endl;
	

	return 0;
}   