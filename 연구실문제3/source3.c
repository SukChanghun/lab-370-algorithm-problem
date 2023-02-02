#include <stdio.h>

void compare(int size, int X[], int Y[])
{
    int k;
    for(int i = 0 ; i<size;i++)
    {
        k=0;
        for(int j = 0 ; j<size;j++)
        {
            if(X[i] < X[j] && Y[i] < Y[j])
            {
                k++;
            }
        }

        printf("%d ", k+1);
    }
}


int main(void)
{
    int size;
    int X[100] = {};//몸무게
    int Y[100] = {};//키

    printf("몇명인지 정하세요 : ");
    scanf("%d", &size);

    printf("몸무게와 키를 입력하세요");
    for(int i = 0 ; i<size; i++)
    {
        scanf("%d %d", &X[i], &Y[i]);
    }

    compare(size, X, Y);

    return 0;
}