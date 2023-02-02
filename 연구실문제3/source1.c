#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//qsort사용 해야함!!

int compareword(void* firstword, void* secondword)
{
    if(strlen((char*)firstword) > strlen((char*)secondword))
    {
        return 1;
    }
    else if(strlen((char*)firstword) > strlen((char*)secondword))
    {
        return -1;
    }
    else{
        return 0;
    }
}

int main(void)
{
    int size;
    char word[20000][51] = {0};
    printf("단어의 갯수를 입력하세오 : ");
    scanf("%d", &size);

    
    for(int i = 0 ; i<size ; i++)
    {
        scanf("%s" , word[i]);
    }

    qsort(word,size, sizeof(word[0]), compareword);

    printf("----------------결과-----------------\n");
    for(int i = 0 ; i<size ; i++)
    {
        printf("%s\n",word[i] );
    }

    return 0;

}