#include<iostream>//i=inout  o=output
#include<string>
using namespace std;
int main() {
	//1.整形的输入
	int a = 5;
	cin >> a;
	cout << "a=" << a << endl;

	//2.浮点型的输入
	double b = 7;
	cin >> b;
	cout << "b=" << b << endl;

	//3.字符型的输入
	char c = '7';
	cin >> c;
	cout << "c=" << c << endl;

	//4.字符串型的输入
	string d = "";
	cin >> d;
	cout << "d=" << d << endl;

	//5.布尔型的输入
	bool e = false;
	cin >> e;
	cout << "e=" << e << endl;

	//对于bool来说：如果输入非0和非1就叫非法,非法后，后面无法输入
	string f = "";
	cin >> f;
	cout << "d=" << f << endl;

	return 0;
}