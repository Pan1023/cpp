#include<iostream>
using namespace std;
//堆区：内存由程序员申请和释放
//c:malloc free  是函数
// c++:new delete 是运算符
int* getV(int v) {
	int* a = new int(v);//int*a是栈上的一个变量
	cout << a << endl;//申请的new,即a解引用（*a） 是在堆区
	return a;//返回是a的复印件，即a里面存的地址，虽然a被操作系统释放了，但a指向的内存还在

}
int main() {
	int* p = getV(1314);
	cout << *p << endl;//所以还是可以解引用得到堆上的数据
	//delete(p);
	cout << p << endl;
	delete(p);
	return 0;
}