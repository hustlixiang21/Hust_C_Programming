/*
1 copy string.
2 connect string.
3 parse string.
4 exit.
input a number (1-4) please!
2↙ （键盘输入）
input the first string please!
the more you learn,↙ （键盘输入）
input the second string please!
the more you get. ↙ （键盘输入）
the result is the more you learn, the more you get.*/
# include<stdio.h>
# include<string.h>
int main (void)
{
    char* (*p[3])(char *,const char *);
    char a[80], b[80], *result;
    int choice;
    while(1)
    {
        do
        {
            printf("\t\t1 copy string.\n");
            printf("\t\t2 connect string.\n");
            printf("\t\t3 parse string.\n");
            printf("\t\t4 exit.\n");
            printf("\t\tinput a number (1-4) please.\n");
            scanf("%d", &choice);
        }while(choice<1 || choice>4);
        p[0]=strcpy;
        p[1]=strcat;
        p[2]=strtok;
        if(choice==4) goto down;
        getchar();
        printf("input the first string please!\n");
        gets(a);
        printf("input the second string please!\n");
        gets(b);
        result=(*p[choice-1])(a,b);
        printf("the result is %s\n", result);
    }
    down:
    return 0;
}