#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d" , &n); 

    if(n >= 1 && n <= 9)
    {
        for(int i = 1 ; i< 10; i++)
        {
            printf("%d\n" , n*i);
        }
    }
    else{
        printf("N의범위가아님\n");
    }

    return 0;
}