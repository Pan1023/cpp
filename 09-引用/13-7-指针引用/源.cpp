#include<iostream>
using namespace std;
//*&
/*
int x=10;
int*p=&x;
int*&r=p;r是p的别名
*/
void alloc1(char* ptr, int bytes) {
	ptr = new char[bytes];
	cout << "ptr的地址"<< & ptr << endl;
}
void test1() {
	char* p = NULL;
	alloc1(p, 5);
	cout << (void*)p << endl;
	cout << "p的地址" << &p << endl;

}
void alloc2(char*& ptr, int bytes) {
	ptr = new char[bytes];
	cout << "ptr的地址" << &ptr << endl;
}
void test2() {
	char* p = NULL;
	alloc2(p, 5);
	cout << (void*)p << endl;
	cout << "p的地址" << &p << endl;

}

/*
int x = 10;
int* p = &x;

int*& r = p;    // ① 指针的引用：r 是 p 的别名，直接就是 p
int** pp = &p;  // ② 指针的指针：pp 存着 p 的地址

// 使用时的差别：
*r = 99;      // 一步到位，改的是 p 指向的内容（x）
**pp = 99;    //    两步：先 *pp 拿到 p，再 * 拿到 x

r = nullptr;   //  直接让 p 变空
*pp = nullptr; //   需要解引用一次再赋值
*/
int main() {
	//test1();
	test2();
	return 0;
}