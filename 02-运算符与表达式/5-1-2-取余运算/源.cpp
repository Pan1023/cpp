#include<iostream>
using namespace std;
// %是对两个整数取余
//取余的结果与被除数正负一致
int main() {
	int a = 100;
	int b = 9;
	cout << a % b << endl;

	a = -100;
	b = 9;
	cout << a % b << endl;
	
	a = 100;
	b = -9;
	cout << a % b << endl;

	a = -100;
	b = -9;
	cout << a % b << endl;

	return 0;
}