#include<iostream>
using namespace std;
//指针数组：每个元素是指针的一个  数组
int main() {
	char a[] = "I";
	char b[] = "love";
	char c[] = "you";

	//指针数组：将3个没关联都联系在一起
	char* p[3];
	p[0] = a;
	p[1] = b;
	p[2] = c;
	for (int i = 0; i < 3; ++i) {
		cout << p[i] << ' ';
	}
	cout << endl;


	//指针数组可以存储二维数组和矩阵
	int mat[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
	};
	int* pmat[3];
	pmat[0] = mat[0];//等于给了第0行的地址
	pmat[1] = mat[1];
	pmat[2] = mat[2];
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << *(pmat[i]+j) << ' ';
		}
		cout << endl;
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			cout << pmat[i][j] << ' ';
		}
		cout << endl;
	}




	return 0;
}