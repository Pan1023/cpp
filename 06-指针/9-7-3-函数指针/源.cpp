#include<iostream>
using namespace std;
//函数指针：指向函数的指针
/*
double (*ptr)(int, int, int);  // ptr 是一个【函数指针】
double *ptr(int, int, int);    // ptr 是一个【返回 double* 的函数】声明！
*/
double (*ptr)(int a, int b, int c);//ptr只能指向"参数是3个int,返回double的函数
//ptr指向func

double func(int a, int b, int c) {
	//其实这里func 也先退化成了函数指针，然后通过这个指针找到函数并执行。
	//函数指针ptr(4,5,6) 能用同样的写法，正是因为二者在调用时本质相同
	
	cout << a << "," << b << ',' << c << endl;
	return 0.0;
}

int main() {
	ptr = func;
	//为什么不写成ptr = &func;
	//函数和数组一样，函数名在表达式中会自动"退化"成它的地址（函数指针),
	// 所以不用写& 。这是 C/C++ 的一条隐式转换规则。
	ptr(4, 5, 6);
	//调用函数本质是 跳转到地址再执行
	//拿到地址、跳转、传参
	//ptr(4,5,6) 等价于(*ptr)(4,5,6) ，也等价于func(4,5,6)
	return 0;
}
//假如有很多函数指向都是"参数是3个int,返回double的函数，那函数指针会指向哪里
//取决ptr=函数，ptr就指向什么函数，可以随时切换（同一时刻只能存一个地址）
