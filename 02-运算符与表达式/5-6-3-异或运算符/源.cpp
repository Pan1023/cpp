#include<iostream>
using namespace std;
//异或：^  从低位到高位，对每一位进行异或，如果二者相同就为0，不相同就为1
int main() {
	//1.异或的定义
	int a = 0b1010;
	int b = 0b0110;
	//  ^ = 0b1100;
	cout << (a ^ b) << endl;
	cout << "---" << endl;

    //2.标记位取反
	//将倒数第四位取反
	int c = 0b1000101;
	//      0b0001000;发现上面与下面0异或是保持不变的，与下面1异或是取反
	cout << c << endl;
	cout << (c ^ 0b1000) << endl;
	cout << ((c ^ 0b1000)^0b1000) << endl;
	cout << "---" << endl;

	//3.变量交换
	//3.1 任何数与0异或，还是他本身
	//3.2 两个相同的数异或，结果为0
	//3.3 异或满足交换律，结合律
	//异或：不带进位的二进制加法
	int d = 17;
	int e = 19;
	d = d ^ e;
	e = d ^ e;//d^e^e=d^0=d
	d = d ^ e;//d^e^d=e^0=e
	cout << d << " " << e << endl;
	cout << "---" << endl;

	//4.出现奇数次的数
	//偶数次的数异或变为0，奇数次的数^0=奇数次的数

	//5.加密
	int x = 1314;
	cout << "520" << x << endl;
	int y = (x ^ 3135);
	/*y=x^k
	* y^x=x^k^x
	* y^x=k
	* x^y=k
	*/
	cout << "520" << y << endl;
	cout << "520" << (y^3135) << endl;
	return 0;

}
