#include <stdio.h>

int main(void)
{
    int dice[3] ={0};
    int maxdice, price =0;

    scanf("%d %d %d" , &dice[0] , &dice[1], &dice[2]);

    for(int i = 0 ; i<3; i++)
    {
        if(dice[i] > 6 || dice[i] < 1)
        {
            printf("%d번째 주사위숫자의 범위벗어남\n", i+1);
        }
    }

    if(dice[0] == dice[1] && dice[0] == dice[2] && dice[1] == dice[2])
    {
        price = 10000+(dice[0] * 1000);
    }
    else if(dice[0] == dice[1] || dice[0] == dice[2])
    {
        price = 1000+(dice[0]*100);
    }
    else if(dice[1] == dice[2])
    {
        price = 1000+(dice[1]*100);
    }
    else if(dice[0] != dice[1] && dice[0] != dice[2] && dice[1] != dice[2])
    {
        if(dice[0] > dice[1] && dice[0] > dice[2])
        {
            maxdice = dice[0];
        }
        else if(dice[1] > dice[0] && dice[1] > dice[2])
        {
            maxdice = dice[1];
        }
        else
        {
            maxdice = dice[2];
        }

        price = maxdice*100;
    }

    printf("%d\n" , price);

    return 0;
}