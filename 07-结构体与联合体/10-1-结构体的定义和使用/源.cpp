#include<iostream>
#include<string>
using namespace std;

//1.结构体的定义  struct 结构体名{结构体成员变量列表}
struct Book {
	string name;
	double price;
	int value;
}cpp;
//2.创建结构体
int main() {
	//2.1
	Book c;
	c.name = "c语言";
	c.price = 39.99;
	c.value = 10;
	cout << c.name << " " << c.price << " " << c.value << endl;	

	//2.2
	Book py = { "Py",1999,10 };
	cout << py.name << " " << py.price << " " << py.value << endl;

	//2.3
	//Book cpp; 定义结构体时定义了cpp全局变量
	cpp.name = "c++";
	cpp.price = 39999.99;
	cpp.value = 10000;
	cout << cpp.name << " " << cpp.price << " " << cpp.value << endl;
	return 0;
}