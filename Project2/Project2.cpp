#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int score = 0;
	printf("점수를 입력하세요 : ");
	scanf("%d", &score);
	switch (score / 10) {
	case 10: case 9:
		printf("%d점은 A학점입니다.\n", score);
		break;
	case 8:
		printf("%d점은 B학점입니다.\n", score);
		break;
	case 7:
		printf("%d점은 C학점입니다.\n", score);
		break;
	case 6:
		printf("%d점은 D학점입니다.\n", score);
		break;
	case 5:
		printf("%d점은 F학점입니다.\n", score);
		break;
	}
}
