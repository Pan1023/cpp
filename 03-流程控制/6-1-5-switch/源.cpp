#include<iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	switch (a) {
	case 0:
		cout << 000 << endl;
		break;
	case 1:
		cout << 111 << endl;
		break;
	case 2:
		cout << 222 << endl;
		break;
	case 3:
		cout << 333 << endl;
		break;
	default:
		cout << "nonono" << endl;
	}
	return 0; 
}