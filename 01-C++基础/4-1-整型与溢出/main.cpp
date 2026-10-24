#include<iostream>
using namespace std;
/*
* 一个字节八个位
* short		2字节	2^16(-2^15~2^15-1)	-32768~32767
* int		4字节	2^32(-2^31~2^31-1)	-2147483648~2147483647
* long		4字节	2^32(-2^31~2^31-1)
* long long  8字节   2^64(-2^63~2^63-1)
*/ 
int main() {
	short a = 32768;//相当于一个环，所以表示为-32768（溢出）
	int b = 2147483648;
	long c = 2147483648;
	long long d = 1;
	cout << "a=" << a <<endl;
	cout << "b=" << b <<endl;
	cout << "c=" << c <<endl;  
	cout << "d=" << d <<endl;
	return 0;
}  