#include<iostream>
#include<string>
using namespace std;
//构造函数的作用：实例化对象时直接自动赋值，不用手动去输入，避免只赋值了一部分，保证赋值完整性，同时可校验数据
/*构造函数的特点：
1.构造函数名称与类名一致
2.返回值类型 不用写
3.函数构造可以有参数
*/
class Hero{
public:
	//默认构造函数
	Hero() {
		this->name = "";
		this->skillcount = 4;
		this->speed = 100;
		cout << "默认构造函数构造完毕！" << endl;
	}
	//有参构造函数
	Hero(string name,int skillcount,int speed) {
		this->name = name;
		this->skillcount = skillcount;
		this->speed = speed;
		cout << "有参构造函数构造完毕！" << endl;
	}
private:
	string name;
	int skillcount;
	int speed;
};
int  main() {
	Hero h;
	Hero h1("剑圣",4,666);
	Hero h2();//这里是函数声明 如int main()
	Hero h3{};
	cout << "--" << endl;
	//匿名对象
	Hero();
	Hero ("剑圣", 4, 666);
	cout << "--" << endl;
	Hero h5= Hero("猴子", 4, 666);
	return 0;
}