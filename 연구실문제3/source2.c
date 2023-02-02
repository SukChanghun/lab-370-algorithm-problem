#include <stdio.h>
//브루트 포스
int main(void)
{
    int N;
    int temp, num;
    scanf("%d", &N);

    for(int i = 1 ; i< N; i++)
    {
        temp = i;
        num = i;

        while ( temp > 0)
        {
            num += temp%10;
            temp /= 10;
        }

        if(num == N)
        {
            printf("%d\n", i);
            N=0;
            break;
        }
    }

    if(N != 0)
    {
        printf("0");
    }
}