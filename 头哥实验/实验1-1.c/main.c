#include <stdio.h>

int main()
{
    char c;
    c=getchar();
    while (c!=EOF)
    {
        if(c>='A'&&c<='Z')
        {
            c+=32;
            printf("%c",c);
        } else
        {
            printf("%c",c);
        }
    c=getchar();
    }
    return 0;
}
