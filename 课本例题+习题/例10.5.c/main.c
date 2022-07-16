#include <stdio.h>
#include <stdlib.h>
void copy_term(const char *filename);
void type(const char *filename);
int main()
{
    copy_term("/Users/lixiang/Desktop/2.txt");
    type("/Users/lixiang/Desktop/2.txt");
    return 0;
}
void copy_term(const char *filename)
{
    FILE *fp;
    char ch;
    if((fp= fopen(filename,"w"))==NULL)
    {
        printf("Can't open the file!\n");
        exit(-1);
    }
    while((ch=fgetc(stdin))!=EOF) fputc(ch,fp);
    fclose(fp);
}
void type(const char *filename)
{
    FILE *fp;
    char ch;
    if((fp= fopen(filename,"r"))==NULL)
    {
        printf("Can't open the file!\n");
        exit(-1);
    }
    while((ch= fgetc(fp))!=EOF) fputc(ch,stdout);
    fclose(fp);
}