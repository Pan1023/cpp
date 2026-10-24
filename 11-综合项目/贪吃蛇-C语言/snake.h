#ifndef __SNAKE_H__
#define __SNAKE_H__
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<conio.h>
#include<Windows.h>
#define WIDE 20
#define HIGH 60
struct BODY {
	int  x;
	int y;

};
struct SNAKE {
	struct BODY body[WIDE * HIGH];
	int size;
}snake;
struct FOOD {
	int x;
	int y;
}food;
int score = 0;
void initsnake();
void initfood();
#endif