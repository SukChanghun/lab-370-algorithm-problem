#include <stdio.h>

int main(void)
{
    int a[1000];
    int N =0;
    int temp;

    printf("수의개수를 정하세요 : ");
    scanf("%d", &N);
    for(int i = 0; i< N; i++)
    {
        printf("%d개의 숫자를 입력하세요 : " , N);
        scanf("%d" , &a[i]);
    }

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

    for(int i = 0 ; i < N;i++)
    {
        printf(" %d ", a[i]);
    }

    return 0;
}

//오름차순 123456789