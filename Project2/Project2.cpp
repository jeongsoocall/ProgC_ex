#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int score = 0;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &score);
	switch (score / 10) {
	case 10: case 9:
		printf("%d���� A�����Դϴ�.\n", score);
		break;
	case 8:
		printf("%d���� B�����Դϴ�.\n", score);
		break;
	case 7:
		printf("%d���� C�����Դϴ�.\n", score);
		break;
	case 6:
		printf("%d���� D�����Դϴ�.\n", score);
		break;
	case 5:
		printf("%d���� F�����Դϴ�.\n", score);
		break;
	}
}
