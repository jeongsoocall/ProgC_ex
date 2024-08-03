#include <stdio.h>
#include"func.h"
extern int a;
void func1() {
	printf("func1() 함수를 실행합니다. \n");
	printf("main 함수 변수 a에 1 을 더하면 %d, \n", a+1);

}