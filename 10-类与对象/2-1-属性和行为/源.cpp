#include<iostream>
using namespace std;
//面向对象三大特性：封装，继承，多态
/*封装的语法：
class 类名{
访问权限:
	属性(成员变量);
	行为(成员函数);
};

*/
class Hero {
	//访问权限：public private protected
public:
	//属性
	int m_Id;//m->member
	int m_Hp;

	//行为
	void addHp(int Hp) {
		m_Hp += Hp;
	}
	void jianHp(int Hp) {
		m_Hp -= Hp;
	}
};
int main() {
	//通过类生成对象的过程，叫 实例化
	Hero h;
	//访问对象属性
	h.m_Id = 5;
	h.m_Hp = 100;
	h.addHp(100);
	cout << "id:" << h.m_Id << " hp:" << h.m_Hp << endl;
	h.jianHp(50);
	cout << "id:" << h.m_Id << " hp:" << h.m_Hp << endl;
	return 0;
}