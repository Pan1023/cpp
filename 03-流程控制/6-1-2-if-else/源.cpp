#include<iostream>
using namespace std;
int main() {
	int x;
	cin >> x;
	if (x & 1) {
		cout << "x是奇数" << endl;
	}
	else {
		cout << "x不是奇数" << endl;
	}


	return 0;
}