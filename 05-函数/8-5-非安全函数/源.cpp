#define _CRT_SECURE_NO_WARNINGS
//注意：#define _CRT_SECURE_NO_WARNINGS 必须写在 所有 include 之前 才有效
#include<iostream>
//非安全函数：scanf   strcpy
/*
*	使用scanf两种方法：
*   1.使用#define _CRT_SECURE_NO_WARNINGS
	2.scanf_s
	使用strcpy两种方法
	1.使用#define _CRT_SECURE_NO_WARNINGS
	2.strcpy_s

*/
using namespace std;
int main() {
	int a;
	scanf("%d", &a);
	cout << a;
	return 0;
}