#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>

int main() {

	extern void gotoxy(int x, int y);
	extern int color(int c);
	extern void title();
	extern void test_ascll();
	extern void flower();
	extern void welcome();
	

	//system("chcp 437");
	title();
	flower();
	welcome();
	//test_ascll();
	system("pause");

	return EXIT_SUCCESS;




}