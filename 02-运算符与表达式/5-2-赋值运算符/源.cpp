#include<iostream>
using namespace std;
//赋值运算符
int main() {
	int x = 6;
	int y = 9;
	x = y;
	cout << x << endl;
	x += y;//x=x+y;
	cout << x << endl;

	x -= y;//x=x-y;
	cout << x << endl;

	x *= y;//x=x*y;
	cout << x << endl;

	x /= y;//x=x/y;
	cout << x << endl;

	x %= y;//x=x%y;
	cout << x << endl;
	return 0;
}