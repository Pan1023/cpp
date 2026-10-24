#include<iostream>
using namespace std;
int* getGapList(int* arr, int size) {
	int *p=new int[size - 1];
	//为什么不int a[size-1];return a;
	//因为a在栈上
	for (int i = 0; i < size - 1; ++i) {
		p[i] = arr[i + 1] - arr[i];
	}
	return p;
}
int main() {
	int arr[] = { 1,5,6,4,4,3,3,2,1,9 };
	int *p=getGapList(arr, 10);
	for (int i = 0; i < 9; ++i) {
		cout << p[i] << " ";
	}
	cout << endl;
	delete[]p;//要是不加[]只会删除数组的第一个位置
	return 0;
}