/*本关任务：
 * 编写一个程序type_c，它专门显示C源程序，并且在显示过程中对每一行加行号。同时设计一个显示控制参数“/p”，
 * 它使得每显示25行（一屏）就暂停，当用户按任何一个键就继续显示下一屏。例如，命令行：
    type_c  /p  type_c.c*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
{
    FILE *p;
    char ch[81];
    int i,cnt=0;
    if((p= fopen(argv[argc-1],"r"))==NULL)
    {
        printf("Can't open the file!\n");
        exit(-1);
    }
    for(i=1;(fgets(ch,80,p))!=NULL;i++,cnt++)
    {
        if(cnt%25==0&&i!=1) getchar();
        printf("%d. ",i);
        fputs(ch,stdout);
    }
    printf("\nProcess completed!\n");
    return 0;
}
