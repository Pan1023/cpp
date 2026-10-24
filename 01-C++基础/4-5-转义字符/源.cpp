#include<iostream>
using namespace std;
//转义字符
/*
* \\
* \n
* \t
*/
int main() {
	cout << "我想放假\0我想回家" << endl;
	cout << "我想放假\088我想回家" << endl;
	cout << "我想放假\077我想回家" << endl;
	cout << "我想放假\\我想回家" << endl;
	cout << "我想放假\"我想回家\"" << endl;


	return 0;
}
/*
* \0xx表示8进制
* \077表示是8进制77的数
* 为什么\088不行：因为8进制没有8，只读取了\0
*/