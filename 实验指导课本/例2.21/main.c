#include <stdio.h>
//解法一
/*int main()
{
    char c;
    int flag=1;
    while ((c=getchar())!='\n')
    {
        if(c!=' '||flag==0)
        {
            flag=0;
            putchar(c);
        }
    }
    return 0;
}*/
//解法二
int main()
{
    char c;
    while ((c=getchar())!=' ');
    putchar(c);
    while ((c=getchar())!='\n')putchar(c);
    return 0;
}
