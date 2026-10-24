#include<iostream>
using namespace std;
//引用在传参的作用：
//1.在返回多个值时
int countAndSum(int arr[], int size, int target, int& count) {
	int sum = 0;
	cout << &count << endl;
	for (int i = 0; i < size; ++i) {
		if (arr[i] == target) {
			count++;
			sum += arr[i];
		}
	}
	return sum;
}
//结构体作为参数时，是拷贝了一份出来，当结构体非常大时，拷贝很耗时
//所以可以通过引用来避免拷贝
struct S {
	int a, b, c, d, e, f, g;
};
void printS(S& s) {
	cout << &s << endl;
	cout << s.a << s.b << s.c << s.d << s.e << s.f << s.g << endl;
}


int main() {
	int arr[] = { 1,2,3,5,4,3,4,1,2,2 };
	int c = 0;
	cout << &c << endl;
	int sum=countAndSum(arr, 10, 2, c);
	cout << sum << "  " << c << endl;
	S s = { 1,2,3,4,5,6,7 };
	cout << &s << endl;
	printS(s);
	return 0;
}