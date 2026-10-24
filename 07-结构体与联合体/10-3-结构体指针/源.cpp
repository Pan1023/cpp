#include<iostream>
using namespace std;
struct Book {
	string name;
	double price;
	int value;
};
int main() {
	Book b = { "c语言",199.99,10 };
	//1.拷贝
	//拷贝：改 c 不影响 b
	Book c = b;
	c.name = "c++";
	cout << b.name << ' ' << b.price << ' ' << b.value << endl;
	cout << c.name << ' ' << c.price << ' ' << c.value << endl;
	cout << endl;
	//2.指针
	//指针：改 b（pb->name）不影响 c
	c.name = "c语言";
	Book* pb = &b;
	pb->name = "c++";
	cout << b.name << ' ' << b.price << ' ' << b.value << endl;
	cout << c.name << ' ' << c.price << ' ' << c.value << endl;
	cout << endl;
	//3.引用
	//引用：改 c 等于改 b，两者同步(这里c用d代替，因为c重定义了)
	b.name = "c语言";
	Book& d = b;
	//Book& d = b; 等于d是b的另一个别名，二者指向同一地址，对象
	d.name = "c++";
	cout << b.name << ' ' << b.price << ' ' << b.value << endl;
	cout << d.name << ' ' << d.price << ' ' << d.value << endl;

	//引用 vs 指针的区别：引用一旦绑定就不能换绑，且不能为空；
	//指针可以随时指向别处。所以"想让两个名字指同一对象"时引用更安全自然。



	return 0;
}