#include<iostream>
using namespace std;
/*申请单个变量
int *p=new int;没有初始化
int *q=new int();全部初始化为0
int *r=new int(1314);全部初始化为1314
delete p; 
delete q; 
delete r;
*/
/*申请数组
int*arr=new int[5];申请里面有5个值的数组，没有初始化
int*brr=new int[5]();申请里面有5个值的数组，初始化全为0
delete [] arr; // 注意：数组要用 delete[]，不能用 delete 
delete [] brr;
*/
int main() {
	int* p = new int;//new int在堆区申请了一个整数大小的内存，并返回指向这个内存的指针
	cout << *p << endl;
	delete p;
	//这时p变成野指针
	p = NULL;//表明p已经为空，不要用了
	return 0;
}