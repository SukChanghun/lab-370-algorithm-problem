#include <stdio.h>

int main(void)
{
    int a[9][9];
    int N, M, Max = 0;

    for(int i = 0; i < 9; i++)
    {
        for(int j = 0 ; j< 9; j++)
        {
            printf("%d행 %d열 : ",i+1,j+1);
            scanf("%d", &a[i][j]);
            if(Max < a[i][j])
            {
                Max = a[i][j];
                N = i+1;
                M = j+1;
            }
        }
    }

    printf("%d행 %d열\n", N, M);
    printf("최댓값 : %d\n" , Max);
    
    return 0;
}