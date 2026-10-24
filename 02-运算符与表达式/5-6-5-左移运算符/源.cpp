#include<iostream>
using namespace std;
//左移：<< (左移一位相当于原来数×2)前提是正数
// << 只认二进制比特，不存在其他进制移位这个操作。
//x<<y=x*2^y
int main() {
	//1.正数的左移(x>0)
	int x = 0b11;
	cout << x << endl;
	x = (x << 1);
	cout << x << endl;
	cout << (x << 4) << endl;
	cout << "--" << endl;

	//2.（少用）负数的左移(x<0)  ***没有办法做到 “不溢出的左移”。只要左移，就会丢掉原来符号位的 1
	int y = -1;
	y = (y << 100);
	cout << y << endl;
	cout << "--" << endl;

	//3.左移负数位（y<0）
	//移位运算符右边的数字必须≥0。写负数，标准直接判定未定义行为
	int z = 64;
	z = (z << (-1));//y不能为负数
	cout << z << endl;
	cout << "--" << endl;

	//4.左移溢出
	int a = 64;
	a = (a << 31);//为什么=0？  因为 int 最多存 32 位，a << 31 超过 32 位，被截断了
	cout << a << endl;

	return 0;
}