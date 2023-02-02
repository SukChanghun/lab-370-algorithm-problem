#include <stdio.h>
#include <stdlib.h>
//  qsort 함수사용

typedef struct
{
    int X;
    int Y;
} XY;


int compare(void *first, void *second)
{
    XY A = *(XY *)first; //XY형의 A로 입력받은 first를 사용할수있게한다.
    XY B = *(XY *)second;

    if(A.X < B.X)
    {
        return -1;
    }
    else if(A.X > B.X)
    {
        return 1;
    }
    else
    {
        if(A.Y < B.Y)
        {
            return -1;
        }
        else
        {
            return 1;
        }
    }

    return 0;
}

int main(void)
{
    int size;
    printf("좌표의 갯수를 설정 : ");
    scanf("%d" , &size);

    XY array[size];

    for(int i = 0 ; i<size;i++)
    {
        scanf("%d %d", &array[i].X, &array[i].Y);
    }

    qsort(array, size, sizeof(XY), compare); //퀵정렬 qsort사용

    printf("-------------------------------------------\n");

    for(int i = 0 ; i< size ; i++)
    {
        printf("%d %d\n", array[i].X, array[i].Y);
    }

    return 0;
}

