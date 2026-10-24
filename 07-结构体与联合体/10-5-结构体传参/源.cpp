#include<iostream>
using namespace std;
struct Point {
	double x, y;
};
struct Circle {
	Point pt;
	double radius;
};
//值不想改变：(只读函数)
//1.直接用结构体本身（不会修改原件）
//2.也可以用指针，但要确保不会改变值，要加const（好处：不用拷贝浪费内存同时也不修改原件）
void printCircle(Circle c) {
	cout << "(" << c.pt.x << "," << c.pt.y << ") " << c.radius << endl;
}
void printCircle1(const Circle *c) {
	cout << "(" << c->pt.x << "," << c->pt.y << ") " << c->radius << endl;
}
//值要改变：用结构体指针，类似址传递
void moveCircle(Circle *c, int x, int y) {
	//cout << &c << endl;
	c->pt.x += x;
	c->pt.y += y;
}
int main() {
	Circle c = { {9,8},5 };
	//cout << &c << endl;
	moveCircle(&c, 1, -2);
	printCircle(c);

	return 0;
}