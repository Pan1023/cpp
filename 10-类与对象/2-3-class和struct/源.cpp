#include<iostream>
using namespace std;
/*struct与class区别(struct也可以表示类)
struct:默认共有
class:默认私有

*/
class C {
	int ma;
};
struct S {
	int ma;
	void func() {
		ma = 66;
	}
};

int main() {
	C c;
	S s;
	//c.ma = 1;发现报错，因为私有类外不可访问
	s.ma = 2;
	s.func();
	cout << s.ma << endl;
	return 0;
}