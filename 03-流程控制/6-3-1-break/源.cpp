#include<iostream>
using namespace std;
int main() {
	//1.while中的break
	int cnt = 0;
	while (1) {
		cnt++;
		cout << "当前次数：" << cnt << endl;
		if (cnt > 20) {
			break;
		}
	}

	//2.for中break
	cnt = 20;
	for (int i = 1;; i++) {
		cout << "当前次数：" << i << endl;
		if (i > cnt) {
			break;
		}
	}

	//3.switch case中break
	int a = 2;
	switch (a) {
	case 1:
		cout << "111" << endl;
	case 2:
		cout << "222" << endl;
	case 3:
		cout << "333" << endl;
	}
	return 0;
}