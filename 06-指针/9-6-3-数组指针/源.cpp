#include<iostream>
using namespace std;
//数组指针：指向数组的指针,类比成二维数组
int main() {
	int(*p)[5];
	//(*p)是指针，指向一个5元素的数组
	int a[4][5] = {
		{4,3,2,1,0},
		{9,8,7,6,5},
		{6,7,8,9,0},
		{5,6,7,8,9},
	};
	p = a;
	cout << p << endl;//0x1000  int (*)[5]   指向一整行数组（数组的指针）
	cout << p+1 << endl;//0x1014 :多20字节   
	cout << (*p) << endl;//int[5]			 指向数组首地址（退化成数组首地址）
	cout << (**p) << endl;//int				 指向具体元素
	cout << (**(p+1)) << endl;
	cout << p[1][0] << endl;
	return 0;
}