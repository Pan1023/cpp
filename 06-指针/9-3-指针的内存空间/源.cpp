#include<iostream>
using namespace std;
//所以指针类型占用的字节数都是8，他只与操作系统有关（64位->8个）
int main() {
	cout << sizeof(int*) << endl;
	cout << sizeof(char*) << endl;
	cout << sizeof(short*) << endl;
	cout << sizeof(long*) << endl;
	cout << sizeof(long long*) << endl;
	cout << sizeof(float*) << endl;
	cout << sizeof(double*) << endl;
	return 0;
}