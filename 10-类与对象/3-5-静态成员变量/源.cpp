#include<iostream>
using namespace std;
class Hero {
public:
	Hero() {
		this->name = "英雄";
		this->hp = 100;
	}
	~Hero() {

	}
private:
	string name;
	int hp;
};
int main() {

	return 0;
}