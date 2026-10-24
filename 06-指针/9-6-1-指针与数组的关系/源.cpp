#include <iostream>
using namespace std;
int main()
{
	//1.利用指针访问数组元素
	int a[5] = { 5,4,3,2,1 };
	int* p = a;
	cout << "数组元素首地址：" << a << endl;
	cout << "指针指向的地址：" << p << endl;

	cout << "指针访问：数组第一个元素:" << *p << endl;
	cout << "数组第二个元素首地址：" << &a[1] << endl;
	cout << "指针+1的地址:" << p + 1 << endl;
	//p+1实际移动的字节数 = sizeof(*p)
	// 他怎么知道？因为定义时有int *p
	cout << "指针p[1]的地址:" << &p[1] << endl;

	//数组与指针的区别
	p++;
	cout << "p++代表？" << *p << endl;
	//a++：数组名是常量，不可++
	return 0;
}
