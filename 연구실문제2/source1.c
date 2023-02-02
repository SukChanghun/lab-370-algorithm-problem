#include <stdio.h>

int main(void)
{
    int ProcessionA[100][100];
    int ProcessionB[100][100];
    int N,M;
    int SumProcession[100][100];

    printf("행렬의 크기를 입력하세요 : ");
    scanf("%d %d" , &N, &M);

    for (int i = 0; i < N; i++)
    {
        for(int j = 0 ; j < M ;j++)
        {
            printf("A의 %d행 %d열 : ", i+1, j+1);
            scanf("%d" , &ProcessionA[i][j]);
        }
    }

    for(int i2 = 0; i2 < N ; i2++)
    {
        for(int j2 = 0; j2<M ; j2++)
        {
            printf("B의 %d행 %d열 : ", i2+1, j2+1);
            scanf("%d", &ProcessionB[i2][j2]);
        }
    }

    for(int i3 = 0; i3<N; i3++)
    {
        for(int j3 = 0; j3<M; j3++)
        {
            SumProcession[i3][j3] = ProcessionA[i3][j3] + ProcessionB[i3][j3];
            printf(" %d ", SumProcession[i3][j3]);
        }
        printf("\n");
    }
    
    return 0;
}