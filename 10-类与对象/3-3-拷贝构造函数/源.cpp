#include<iostream>
using namespace std;
//拷贝构造函数目的：用一个对象初始化另一个对象
//拷贝构造函数的定义：类名(const 类名& 变量名){}
//const代表传进来的值不可修改，&代表减少一次拷贝
class Hero {
public:
	Hero() {
		this->Hp = 100;
		cout << "默认构造函数调用完毕" << endl;
	}

	Hero(int Hp) {
		this->Hp = Hp;
		cout << "有参构造函数调用完毕" << endl;
	}

	Hero(const Hero& h) {
		this->Hp = h.Hp;
		cout << "拷贝构造函数调用完毕" << endl;
	}

	~Hero() {
		cout << "析构函数调用完毕" << endl;
	}

private:
	int Hp;
};


/*Hero h2 (h1) ;	// 写法1：括号初始化       
Hero h2 = h1;		// 写法2：= 初始化           → 都触发拷贝构造(都有一个对象初始化另一个对象)
test1 (h1);			// 写法3：按值传参  
*/
//1.用已经创建的对象初始化对象
void func1() {
	cout << "——————————func1——————————" << endl;
	Hero h1(20);
	Hero h2(h1);

}
//2.函数的传参
void test1(Hero h) {

}
void test2(Hero* h) {

}
void func2() {
	cout << "——————————func2——————————" << endl;
	Hero h3;
	//test1(h3);//h3值传递给h,相当于一个对象初始化另一个对象
	test2(&h3);//为什么这里没有调用拷贝构造函数？因为这里拷贝的是地址，没有进行对象初始化对象的操作
	//- 复制Hero 对象 → 走 Hero 的拷贝构造
	//-复制Hero* 指针 → 传参时复制的是"地址数字"这个量，而不是"整整一个 Hero 对象"。拷贝构造函数只在复制 Hero 对象时才触发

}

//3.
Hero test3() {
	Hero h(40);
	return h;
}
void func3() {
	cout << "——————————func3——————————" << endl;
	Hero h5 = test3();
	/*test1(h3)会拷贝，因为 h3 在函数外还要继续用，必须真复制一份；
	test3()不拷贝，因为返回的 h 是函数局部对象、马上销毁，编译器让外面接收的 h5 直接顶替它的位置，
	一体两份纯属浪费，于是用 RVO 省了。 关键看原对象"还活不活着"——活着必须复制，快死了就能顶替。*/

}
int main() {
	func1();
	func2();
	func3();
	return 0;
}