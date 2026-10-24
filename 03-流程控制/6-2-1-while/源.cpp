#include<iostream>
#include<string>
using namespace std;
int main() {
	int cnt=0;
	string a;
	while (cnt < 100) {
		cout << "I love" << endl;
		cnt++;
	}
	while (cin >> a) {
		cout << a+"写算法" << endl;
	}

	return 0;
}