#include <stdio.h>
#include <string.h>

typedef struct p
{
    int age;
    char name[30];
}w;

w member[100001];

int main(void)
{
    int N;

    printf("회원수를 입력하세요 : ");
    scanf("%d", &N);

    for(int i = 0 ; i < N;i++)
    {
        scanf("%d %s", &member[i].age, &member[i].name);
    }

    printf("출력 : \n");
 
    for(int i =1 ; i< 201; i++)
    {
        for(int j = 0 ; j < N; j++)
        {
            if(i == member[j].age)
            {
                printf("%d %s\n" , member[j].age, member[j].name);
            }
        }
    }

    return 0;
}