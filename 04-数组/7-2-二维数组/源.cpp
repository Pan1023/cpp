#include<iostream>
using namespace std;
//数组名代表数组元素的首地址
int main() {
	//1.二维数组的定义
	//数组类型 数组名[行][列]
	int a[3][4];
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 4; ++j) {
			a[i][j] = i * j;
		}
	}
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 4; ++j) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << "--" << endl;

	//2.二维数组初始化
	int b[4][4] = {
		{1,2},
		{2,3},
		{6,7,8},
		{9,1},
	};
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}