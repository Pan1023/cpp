#include<iostream>
using namespace std;
//数组指针是指向一整行数组，不是指向数组值
//数组指针是二级指针
string getHex(int x) {
	char buff[10];
	sprintf_s(buff, "%X", (x & 0xFFFF));  
	//把 x 的低 16 位，按大写十六进制的样子，写进 buff 这个字符数组里。
	//sprintf_s就是" 安全版的、把数字按指定格式写成文字存进字符串 "的函数,%X让它写成大写十六进制
	//0xFFFF是十六进制的16个1（二进制0000...0000 1111 1111 1111 1111）
	// 与x 按位与后， 高 16 位全被清零，只保留 x 的低 16 位 。
	//等于保留16进制后4位数
	return (string)buff;
}
int main() {
	int a[3][4] = {
		{1,2,3,4},
		{5,6,7,8},
		{9,10,11,12},
	};
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; ++j) {
			if (j) {
				cout << "," ;
			}
			int* p = &a[i][j];
			cout << getHex((int)p);
		}
		cout << endl;
	}
	
	//指针数组
	int* q[3] = { a[0],a[1],a[2] };//int* q[3] = { &a[0][0],&a[1][1],&a[2][2] };
	cout << q[0] << endl << q[1] << endl << q[2] << endl;

	//数组指针
	int(*p)[4];
	p = &a[0];
	cout << "--" << endl;

	cout << "1.指针 + i" << endl;
	cout << "指针数组（没啥用）" << endl;
	for (int i = 0; i < 3; i++) {
		string s = getHex((int)(q + i));
		cout << "第" << i << "个q元素的地址是" << s << endl;//就是第i行首元素地址
	}
	cout << "数组指针" << endl;
	for (int i = 0; i < 3; i++) {
		string s = getHex((int)(p + i));
		cout << "第" << i << "个[4]数组的地址是" << s << endl;
	}

	cout << "2.*（指针+i）" << endl;
	cout << "指针数组" << endl;
	for (int i = 0; i < 3; i++) {
		string s = getHex((int)*(q + i));
		cout << "a数组第" << i << "行第0个元素数组的地址是" << s << endl;
	}
	cout << "数组指针" << endl;
	for (int i = 0; i < 3; i++) {
		string s = getHex((int)*(p + i));
		cout << "a数组第" << i << "行第0个元素数组的地址是" << s << endl;
	}

	cout << "3.*（指针+i）+j" << endl;
	cout << "指针数组" << endl;
	for (int i = 0; i < 3; i++) {
		string s = getHex((int)(*(q + i)+1));
		cout << "a数组第" << i << "行第1个元素数组的地址是" << s << endl;
	}
	cout << "--" << endl;
	cout << "用q[i][0]表示(直接输出值，不是地址)" << endl;
	for (int i = 0; i < 3; i++) {
		cout << q[i][0] << endl;
	}
	cout << "数组指针" << endl;
	for (int i = 0; i < 3; i++) {
		string s = getHex((int)(*(p + i)+2));
		cout << "a数组第" << i << "行第2个元素数组的地址是" << s << endl;
	}
	cout << "--" << endl;
	cout << "用p[i][2]表示(直接输出值，不是地址)" << endl;
	for (int i = 0; i < 3; i++) {
		cout << p[i][2] << endl;
	}
	
	return 0;
}