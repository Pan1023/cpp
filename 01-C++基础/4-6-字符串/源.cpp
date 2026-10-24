#include<iostream>
#include<string>
using namespace std;
//字符串：一个一个字符组成的串+\0
int main() {
	//c风格
	char a[] = "英雄算法";
	cout << a << endl;
	cout << sizeof(a) << endl;

	//c++风格
	string b = "夜深人静写算法";
	cout << b +"“" << endl;
	cout << sizeof(b) << endl;

	return 0;
}