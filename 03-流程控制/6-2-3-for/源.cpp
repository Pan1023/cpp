#include<iostream>
using namespace std;
int main() {
	int sum = 0;
	int i = 1;
	for (; i <= 5; ++i) {
		sum += i;
	}
	cout << sum << endl;
	return 0;
}