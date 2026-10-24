#include<iostream>
#include<string>
using namespace std;
//接口，方法，函数都是同一个概念
//作用：
// 1.控制读写权限的有效性
//2.可以检测数据的有效性（因为入口只有一个，每次经过都要验证）
class Hero {
public:
	void setname(string name) {
		this->name = name;
	}
	string getname() {
		return name;
	}
	int getskillcount() {
		return skillcount; 
	}
	void setspeed(int speed) {
		\
			if (speed > 99)
				cout << "速度不合法" << endl;
		this->speed = speed;
	}
private:
	string name;			//可读可写
	int skillcount = 4;     //只读
	int speed=0;			//只写
};
int main() {
	Hero h;
	h.setname("剑圣");
	cout << "name:" << h.getname() << endl;
	cout << "技能数：" << h.getskillcount() << endl;
	h.setspeed(10);

	return 0;
}