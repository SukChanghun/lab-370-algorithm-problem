#include <stdio.h>

int main(void)
{
    int size, temp;
    printf("좌표갯수 : ");
    scanf("%d" , &size);

    int x[size];
    int y[size];

    for(int i = 0 ; i<size ; i++)
    {
        scanf("%d %d", &x[i], &y[i]);
    }

    for(int i = 0 ; i< size ;i++)
    {
        for(int j = 0; j < size; j++)
        {
            if(x[i] < x[j])
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    printf("------------------------------\n");
    for(int i = 0 ;i <size; i++)
    {
        printf("%d %d\n", x[i], y[i]);
    }

    return 0;
}