#include <stdio.h>
unsigned char CheckOdd(char x);
int main()
{
    char s[100];
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++)
    {
        unsigned char c;
        c=CheckOdd(s[i]);
        printf("%#x",c);
    }
    return 0;
}
unsigned char CheckOdd(char x)
{
    int n=0,back;
    back=x;
    while(x!=0)
    {
        n++;
        x&=(x-1);
    }
    if(n%2==0)
    {
        back=x&(x<<7);
    }
    return back;
}