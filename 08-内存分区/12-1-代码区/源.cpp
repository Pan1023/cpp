#include<iostream>
using namespace std;
//代码区，全局区，栈区，堆区
// 代码区：进程运行时所有要执行的机器指令，不管谁写的
//代码区两个特点：只读，共享
//只读：代码区运行起来无法修改
//共享：当运行多进程,他们都是共享同一内存
void printMessage() {
	cout << "hello world" << endl;
}
int main() {
	printMessage();
	while (1);
	return 0;
}