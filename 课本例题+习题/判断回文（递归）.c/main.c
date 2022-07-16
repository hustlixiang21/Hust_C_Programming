#include<stdio.h>
#include<string.h>
int i=0;
int fun(char c[] , int length)
{
    if(length -1 - i <= 1) return c[i]==c[length-1];
    if(c[i++] == c[length - 1])
    {
        fun(c , length -1 );
        return 1;
    }
    else return 0;
}
int main(void){
    char c[100];
    scanf("%s",c);
    int length= strlen(c);
    if(fun(c , length))
    {
        printf("yes");
    }
    else printf("no");
}