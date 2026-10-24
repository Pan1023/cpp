#include<iostream>
using namespace std;
struct S {
	int a, b, c, d, e, f;
};
//作用：既不用拷贝对象s，又不会修改s中的值（只读）
void printS(const S& s) {
	//s.b = 250;不给修改了
	cout << s.a << s.b << s.c << s.d << s.e << s.f;
}
int main() {
	int a;
	const int& b = 1;
	//引用=指针常量
	//常量引用=常量指针常量
	S s = { 1,2,3,4,5,6 };
	printS(s);
	return 0;
}