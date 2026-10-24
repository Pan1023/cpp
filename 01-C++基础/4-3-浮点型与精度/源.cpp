#include<iostream>
#include<iomanip>
#include<cmath>

#define eps 1e-7
//float  4字节
//double 8字节

using namespace std;
//总结
//1.setprecision(x)表示精度
//2.浮点数的比较
int main() {
	float a = 13.1415926;
	double b = 3.1415926111111111111;
	double c = 1.5e-5;
	cout << setprecision(10) << a << endl;//setprecision(x)表示所有数字x位
	cout << setprecision(20) << b << endl;
	cout << setprecision(20) << c << endl;
	
	double x = 1.0/49* 49;
	double y = 1 / 2345 * 2345;
	//若是1/2345*2345结果会为0,因为1/2345结果是整数除法，保留整数部分，直接舍弃小数
	cout << setprecision(17) << x << endl;
	cout << setprecision(10) << y << endl;

	//浮点数判相等：只需2个数相减能否小于相对较小的数（因为有误差）
	if (x == 1) {
		cout << "x=1" << endl;
	}
	if (fabs(x-1) <eps) {
		cout << "hhh" << endl;
	}
	return 0;
}