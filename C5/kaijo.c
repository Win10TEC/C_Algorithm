#include <stdio.h> 

int hmain() 


{ 
  int i; 
  int x; 

  int factorial = 1; 
  printf("整数を入力せよ：");
	scanf_s("%d",&x);

  for(i=1; i<=x; i++) { 
    factorial = factorial * i; 
  }

  printf("%dの階乗は%dです。\n",x,factorial);

  return 0; 
} 
