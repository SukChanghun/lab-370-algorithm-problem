//함수로 구현
#include <stdio.h>

void Uparrange(int N, int a[])
{
    int temp = 0;
    for(int i = 0 ; i< N; i++)
    {
        for(int j = 0 ; j< N ; j++)
        {
            if(a[i] < a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void printA(int N, int a[])
{
    for(int i = 0 ; i< N; i++)
    {
        printf(" %d " , a[i]);
    }
}

int main(void)
{
    int a[1000];
    int N =0;
    int temp;

    printf("수의개수를 정하세요 : ");
    scanf("%d", &N);
    printf("%d개의 숫자를 입력하세요 : " , N);
    for(int i = 0; i< N; i++)
    {
        scanf("%d" , &a[i]);
    }

    Uparrange(N, a);
    printA(N,a);

    return 0;
}