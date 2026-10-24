#include<iostream>
using namespace std;
/*访问权限
公共权限 public：类内可以访问，类外也可以访问
保护权限 protected：类内可以访问，类外不可以访问（子类可以访问）
私有权限 private：类内可以访问，类外不可以访问（子类不可以访问）
*/
class people {
public:
	int id;
protected:
	int house_id;
private:
	int paypass;
};
//子类继承
class son :public people {
	void func() {
		id = 1;
		house_id = 5;
		//paypass = 1314;私有成员子类不可访问
	}
};
int main() {
	 
	return 0;
}