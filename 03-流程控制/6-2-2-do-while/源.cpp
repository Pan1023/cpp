#include<iostream>
using namespace std;
int main() {
	int a = 3;
	do {
		cout << a << endl;
	} while (a < 3);
	cout << "--" << endl;
	while (a < 3) {
		cout << a << endl;
	}
	return 0;
}