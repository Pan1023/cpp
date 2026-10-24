#include<iostream>
using  namespace std;
//指针函数：返回值是一个指针
/*释放
new        →  delete
new[]      →  delete[] 为啥要多[]?因为要知道到底要释放几个对象、调用几次析构函数 。
malloc     →  free
*/
/*申请
int * p = new int ;
int * arr = new int [ 5 ];
*/

//返回一个等差数列
int* getArray(int a, int d, int n) {
	int* ret = new int[n];
	for (int i = 0; i < n; i++) {
		ret[i] = a + i * d;
	}
	return ret;
}
int main() {
	int* ans = getArray(5,3,6);
	for (int i = 0; i < 6; i++) {
		cout << *(ans + i) << endl;
	}
	for (int i = 0; i < 6; i++) {
		cout << ans[i] << endl;
	}


	return 0;
}