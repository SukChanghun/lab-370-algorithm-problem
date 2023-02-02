#include <stdio.h>

int P(int N)
{
    if(N == 1)
    {
        return 1;
    }
    else{
        printf("%d X " , N);
        return N * P(N-1);
    }
}

int main(void)
{
    int N;
    scanf("%d", &N);

    printf("1 = %d\n" ,P(N));

    return 0;
}