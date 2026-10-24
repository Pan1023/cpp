#include<iostream>
using namespace std;
//作用：同时既能访问又能修改
int &getArrayValue(int arr[], int index) {
	return arr[index];
}
/*
int& get(int i) { return arr[i]; }
//     ↑ 相当于对每个 i 做了：
//     int& 别名 = arr[i];
//     return 别名;
*/
int main() {
	int a[] = { 8,7,6,5,4,3 };
	cout << getArrayValue(a, 3) << endl;
	getArrayValue(a, 3) = 999;//等价a[3]=999;
	cout << getArrayValue(a, 3) << endl;
	return 0;
}