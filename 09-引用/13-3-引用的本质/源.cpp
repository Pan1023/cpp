#include<iostream>
using namespace std;
//引用本质：指针常量
// 指针本身不能改（不能换指向），但指向的内容可以改。
int main() {
	int a = 520;
	//int& b = a;		//00007FF6A90118C5  lea         rax,[a]  
						//00007FF6A90118C9  mov         qword ptr[b], rax
	//b = 1314;			//00007FF6A90118CD  mov         rax,qword ptr [b]  
						//00007FF6A90118D1  mov         dword ptr[rax], 522h

	int* const b = &a;  //00007FF6CB2818C5  lea         rax,[a]  
						//00007FF6CB2818C9  mov         qword ptr[b], rax
	*b = 1314;			//00007FF6CB2818CD  mov         rax,qword ptr [b]  
						//00007FF6CB2818D1  mov         dword ptr[rax], 522h
	return 0;
}