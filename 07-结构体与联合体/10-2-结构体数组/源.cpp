#include<iostream>
using namespace std;
struct Book {
	string name;
	double price;
	int value;
};
//struct Book不是变量，是类型，只规定成员和声明顺序
int main() {
	//创建结构体数组
	//Book 数组名[元素个数]={{},{},{}...}
	// {} 里值的 顺序必须和结构体成员声明顺序一致
	Book books[3] = {
		{"c语言程序与设计",199.99,10},
		{"py",19.99,9},
		{"c++",200,100000}
	};
	books[2].name = "c++入门到入土";
	for (int i = 0; i < 3; i++) {
		cout << books[i].name << " " << books[i].price << " " << books[i].value << endl;
	}
	return 0;
}