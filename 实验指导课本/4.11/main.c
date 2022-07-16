#include <stdio.h>
enum {copy,start,comment,end};
/*remove comment from c program*/
int main() {
    char c;
    int state=copy;
    printf("input a c program end with ctrl+z:\n");
    while((c=getchar())!=EOF)
    {
        switch (state)
        {
            case copy:
                if(c=='/')
                    state=start;
                else
                    putchar(c);
                break;
            case start:
                if(c=='*')
                    state=comment;
                else
                {
                    putchar('/');
                    state=(c=='/')?start:(putchar(c),copy);
                }
                break;
            case comment:
                if(c=='*')
                    state=end;
                break;
            case end:
                if(c=='/')
                    state=copy;
                else
                {
                    state=(c=='*')?end:comment;
                }
                break;
        }
    }
    return 0;
}
