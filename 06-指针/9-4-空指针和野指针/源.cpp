#include<iostream>
using namespace std;
int main() {
	//1.空指针
	int* p = NULL;
	//cout << *p << endl;

	//2.野指针
	p = (int*)0x123324;
	cout << *p << endl;
	return 0;
}