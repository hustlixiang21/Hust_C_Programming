#include <stdio.h>
#include "stdlib.h"
void move(int,int,int,int);

int main()
{
    int n,a='A',b='B',c='C';
    printf("\n-----TOWERS OF HANOI-----\n");
    printf("The problem starts with n disks on Tower n.\nInput n:");
    if(scanf("%d",&n)!=1||n<1)
    {
        printf("\nERROR:Positive integer not found\n");
        return -1;
    }
    move(n,a,b,c);
    return 0;
}
void move(int n,int a,int b,int c)
{
    static int i=1;
    if(n==1)
        printf("step %d: %c-->%c\n",i++,a,c);
    else
    {
        move(n-1,a,c,b);
        printf("step %d: %c-->%c\n",i++,a,c);
        move(n-1,b,a,c);
    }
}
