#include<iostream>
#define n 100
using namespace std;
int main() {
	//1.数组的定义
	//数据类型 数组名[数字/常量表达式]
	
	int a[1024];
	double b[n] = {1,2,3,4};
	char c[1314];
	int x[10], x2[20], x3[30], x4, x5;
	cout << b[1] << endl;
	cout << "--" << endl;

	//2.数组元素访问
	//数组名[下标]
	for (int i = 0; i < 5; ++i) {
		cout << b[i] << endl;
	}
	cout << "--" << endl;

	//3.逆序输出
	//输入一个n(n<100)和n个数，逆序输出n个数
	int z;
	int A[100];
	cin >> z;
	for (int i = 0; i < z; ++i) {
		cin >> A[i];
	}
	for (int i = z - 1; i >=  0; --i) {
		cout << A[i] << endl;
	}
	
	return 0;
}