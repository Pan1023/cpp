#include<iostream>
using namespace std;
int main() {
	int i = 8, j = 8;
	int x = i++;//先把值给到x,再执行递增
	int y = ++j;//先执行递增，再把值给到有（效率高一点点）
	cout << x << endl << y << endl;
	return 0;
}