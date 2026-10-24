#include<iostream>
using namespace std;
/*
	const与指针的关系
*/

int main() {
	int a = 1;
	int b = 2;
	//1.指针常量:指针本身不能改（不能换指向），但指向的内容可以改。 
	//指针的值是一个常量
	int* const p = &a;
	//p = &b;  错误
	*p = 6;
	cout << a << endl;

	//2.常量指针:指向的对象不能通过它改，但指针本身可以改指向别处。
	//指向常量的指针
	const int* pa = &a;
	//*pa = 9;错误
	pa = &b;
	cout << *pa << endl;

	//3.常量指针常量
	//指针值和指针所指向的值都是常量
	const int* const paa = &a;
	//*paa = 9;错误
	//paa = &b;
	
	return 0;
}