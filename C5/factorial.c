#include<stdio.h>

int factorial(int n){
	if(n>0)
		return n * factorial(n-1);
	else
		return 1;
}
int fmain(void){
	int x;
	printf("整数を入力せよ：");
	scanf_s("%d",&x);

	printf("%dの階乗は%dです。\n",x,factorial(x));
	return 0;
}