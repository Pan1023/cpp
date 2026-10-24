#include<iostream>
using namespace std;
// a  是 char 
// &a 是 char*
//& 给的不只是地址，还带着"这个地址里装的是什么类型"的信息a是char所以&a自然就是char*
/*
	char*  ──→ 1号窗口（念内容，当字符串）   → 乱码
	int*   ──→ 2号窗口（写地址）             → 0x7fff...
	void*  ──→ 2号窗口（写地址）             → 0x7fff...
*/
int main() {
	char a = 10;
	cout << (&a) << endl;
	cout << (void*)(&a) << endl;
	printf("%#X\n", &a);
	printf("%p", &a);
	return 0; 
}