#include<iostream>
#include<string>
using namespace std;
//语法：构造函数(传参1，传参2)：成员变量1(传参1)，成员变量2(传参2){}
//与构造函数有什么区别：由赋值变成初始化

//构造函数：int Hp; Hp = hp; —— 先造个垃圾值，再覆盖
//初始化列表：int Hp = hp; —— 一步到位(说明没进行默认构造)

/*必须用初始化列表
const 成员(只能初始化不能赋值)
引用成员(引用要绑定后才能存在，而且不能换绑，而绑定只能在初始化进行一次)
无默认构造成员(赋值要先进行默认构造，初始化列表不用)
*/
class Hero {
public:
	Hero(string name, int hp):name("name"), hp(hp) {
		//成员按声明顺序初始化，不按列表顺序
	}
	void Print() {
		cout << "英雄：" << this->name << " 血量：" << this->hp << endl;
	}
private:
	string name;//声明前
	int hp;//声明后
};
int main() {
	Hero h("剑圣", 100);
	h.Print();
	return 0; 
}