#include <stdio.h>
#include <string.h>
int main(void)
{
	int input;
	int sum= 0;
	int count = 1;
	char a[80];

	printf("입력갯수를 입력하세요 : ");
	scanf("%d", &input);

	for (int i = 0; i < input; i++)
	{
		scanf("%s", &a);

		for (int j = 0; j < strlen(a); j++)
		{
			if (a[j] == 'O')
			{
				sum += count;
				count++;
			}
			else
			{
				count = 1;
			}
		}
	}

	printf("%d\n", sum);

	return 0;
}