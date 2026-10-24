#define _CRT_SECURE_NO_WARNINGS
#include"snake.h"
void initsnake() {
	int size = 2;
	snake.body[0].x = WIDE / 2;
	snake.body[0].y = HIGH / 2;
	snake.body[1].x = WIDE / 2 - 1;
	snake.body[1].y = HIGH / 2;
	return;

}
void initfood() {
	food.x = rand() % WIDE;
	food.y = rand() % HIGH;
}

int main() {
	srand(time(NULL));
	initsnake();
	initfood();
	printf("蛇头：%d %d", snake.body[0].x, snake.body[0].y);
	printf("蛇身：%d %d", snake.body[1].x, snake.body[1].y);
	printf("食物：%d %d", food.x, food.y);
	system("pause");
	return EXIT_SUCCESS;
}