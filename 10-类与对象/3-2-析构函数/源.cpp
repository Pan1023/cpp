#include<iostream>
using namespace std;
//析构函数是"构造函数"的反面——构造函数管"出生时的初始化"，析构函数管"销毁前的收尾"(自动销毁)
/*析构函数特点：
1.函数名与类名一致，前面加上~
2.返回值类型 不用写
3.没有参数(销毁又不用参数)
4.自动销毁
5.每个类只有一个析构函数
*/
/*什么时候自动销毁？
在数据释放时自动销毁
栈上Hero h; 离开作用域时销毁
堆上new Hero();delete时销毁
*/
class Hero {
public:
	Hero() {
		cout << "Hero构造函数调用完毕" << endl;
	}
	~Hero() {
		cout << "Hero析构函数调用完毕" << endl;
	}
};
void test() {
	Hero h;
}
int main() {
	test();
	Hero h;
	int a;
	cin >> a;
	return 0;
}