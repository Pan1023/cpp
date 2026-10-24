#include<iostream>
using namespace std;
int main() {
	int a = 10;
	int b = 20;
	//1.指针的定义
	//数据类型*数据名;
	int* pa;
	pa = &a;
	//pa = &b;
	printf("%p\n", &a);
	printf("%p\n", pa);

	//2.解引用
	//*指针变量名 =数值;
	*pa = 7;
	cout << a << ' ' << (*pa) << endl;

	//3.*和&(右结合)
	//*&a=*(&a)=*pa=a
	//&*pa=&(*pa)=&a=pa
	return 0;
}