#include <stdio.h>
#include "stdlib.h"
int main(int argc,char *argv[])
{
    FILE *fin,*fout;
    int len=atoi(argv[argc-1]);
    int i,j;
    char a[81];
    if((fin= fopen(argv [1],"r"))==NULL)
    {
        printf("Can't open the file!\n");
        exit(-1);
    }
    for(i=2;i<argc-1;i++)
    {
        fout= fopen(argv[i],"w");
        j=0;
        while((fgets(a,80,fin))!=NULL&&j++<len) fputs(a,fout);
        fclose(fout);
    }
    fclose(fin);
    return 0;
}
