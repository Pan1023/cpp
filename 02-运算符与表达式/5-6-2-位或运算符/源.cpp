#include<iostream>
using namespace std;
//位或：|(把二进制的两个数每一位从低到高进行或运算)
int main() {
	//1.位或的定义：
	int a = 0b1010;//10
	int b = 0b0110;//6
	//  | = 0b1110;//14
	cout << (a | b) << endl;
	cout << "---" << endl;

	//2.设置标记位
	int c = 0b100111;//标记将第4个变成1
	//      0b001000;
	cout << (c | 0b1000) << endl;
	cout << "---" << endl;

	//3.置空标记位    将c最低位变成0
	// 将c的最低位变成0，其余位不变
	int d = 0b000001;
	cout << ((c | d) - d) << endl;//先把最后一位变成1，再减1
	cout << "---" << endl;

	//4.低位连续的0变1
	int e = 0b1010010000;
	//目标   0b1010011111;
	// e-1= 0b1010001111;
	//  | = 0b1010011111;
	cout << (e|(e-1)) << endl;
	cout << "---" << endl;
	return 0;
}