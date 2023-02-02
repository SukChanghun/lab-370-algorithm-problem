#include <stdio.h>

int main(void)
{
	int N= 0;

	printf("정수의 갯수를 입력하세요");
	scanf("%d\n", &N);

	int a[80];
	
	for (int i = 0; i < N; i++)
	{	
		scanf("%d", &a[i]);
	}

	int min = a[0], max = a[0];
	for (int j = 0; j < N; j++)
	{
		if (a[j] < min)
		{
			min = a[j];
		}

		if (a[j] > max)
		{
			max = a[j];
		}
	}

	printf("최솟값 : %d 최댓값 : %d\n", min, max);
}

//가변배열 사용불가? 배열의 사이즈에 정수값을 넣을수가없음
