#include <stdio.h>

int main(void)
{
	int star = 0;

	printf("star의 숫자를 입력하세요");
	scanf("%d", &star);

	if (star <= 1 || star >= 100)
	{
		printf("범위를 넘어섰습니다.");
	}
	else
	{
		for(int i = 1; i <= star; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}

	return 0;
}