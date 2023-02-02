
#include <stdio.h>

int fibonacci(int N)
{
    if(N == 2 || N == 1)
    {
        return 1;
    }
    else if( N == 0)
    {
        return 0;
    }
    else
    {
        return fibonacci(N-1)+fibonacci(N-2);
    }
}

int main(void)
{
    int N;
    
    printf("N을 입력하세요 : ");
    scanf("%d", &N);

    for(int i = 0 ; i < N+1; i++)
    {
        printf("fibonacci(%d) = %d\n", i,fibonacci(i));
    }


    return 0;
}
