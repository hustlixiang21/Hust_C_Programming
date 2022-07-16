#include<stdio.h>
int  main()
{
    char c;
    scanf("%c",&c);

    if(c>='0' && c<='9')
        printf("%d\n",c-'0');
    else if(c>='a' && c<='f')
        printf("%d\n",c-'a'+10);
    else if(c>='A' && c<='F')
        printf("%d\n",c-'A'+10);
    else printf("%c\n",c);
    return 0;
}