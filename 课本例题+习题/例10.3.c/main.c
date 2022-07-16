#include <stdio.h>
int main()
{
    char a[20];
    unsigned char u,i=0;
    FILE *fin,*fout;
    fout= fopen("/Users/lixiang/Desktop/3.txt","w+");
    while(gets(a))
    {
        fprintf(fout,"%s",a);
    }
    fclose(fout);
    fin=fopen("/Users/lixiang/Desktop/3.txt","r+b");
    while(!feof(fin))
    {
        fread(&u,sizeof(unsigned char),1,fin);
        if(!feof(fin))
        {
            printf("%04x    %X\t",i++,u);
            if(i/4==0) printf("\n");
        }
    }
    printf("\n");
    fclose(fin);
    return 0;
}
