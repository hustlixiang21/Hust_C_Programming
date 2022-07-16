/*本关任务：
 * 编写一个程序，用给定的字符串替换文件中的目标字符串，并显示输出替换的个数。
 * 注意：读取的文件路径请使用experiment/src/step8/source.txt
 * 若文件为
There are moments in life when you miss someone so much that you just want to pick them from your dreams
 and hug them for real!
样例输入：
you they
样例输出：
3
There are moments in life when they miss someone so much that they just want to pick them from theyr dreams
 and hug them for real!*/
#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fin,*fout;
    char source[20],replace[20],words[20],temp[20];
    int cnt=0,sourcelen,replacelen,n=0,flag=0;
    if((fin= fopen("/Users/lixiang/Desktop/2.txt","r"))==NULL)
    {
        printf("Can't open the file!\n");
    }
    fout= fopen("/Users/lixiang/Desktop/3.txt","w");
    scanf("%s",source);
    scanf("%s",replace);
    sourcelen= strlen(source);
    replacelen= strlen(replace);
    while((fscanf(fin,"%s",words))!=EOF)
    {
        flag=0;
        for(int i=0;words[i]!='\0';i++)
        {
            if(!strncmp(source,words+i,sourcelen))
            {
                flag=1;
                strcpy(temp,words+i+sourcelen);
                strcpy(words+i,replace);
                strcpy(words+i+replacelen,temp);
                fprintf(fout,"%s ",words);
                cnt++;
                n++;
            }
        }
        if(flag==0)
        {
            fprintf(fout,"%s ",words);
            n++;
        }
    }
    printf("%d\n",cnt);
    freopen(NULL,"r",fout);
    for(int i=0;i<n-1;i++)
    {
        fscanf(fout,"%s",words);
        printf("%s ",words);
    }
    fscanf(fout,"%s",words);
    printf("%s",words);
    fclose(fin);
    fclose(fout);
    return 0;
}
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//    FILE *fp,*put;
//    char source[20],replace[20],words[20],temp[20];
//    int all=0, cnt=0;
//    scanf("%s %s",source,replace);
//    int lens = strlen(source);
//    int lenr = strlen(replace);
//    fp=fopen("experiment/src/step8/source.txt", "r");
//    put=fopen("output.txt", "w+");
//    if(fp){
//        while(fscanf(fp, "%s" ,words)==1)
//        {
//            int flag = 1;
//            for(int i = 0;words[i] != '\0';i++)
//            {
//                if(strncmp(source,words+i,lens)==0)
//                {
//                    strcpy(temp,words+i+lens);
//                    strcpy(words+i,replace);
//                    strcpy(words+i+lenr,temp);
//                    fprintf(put,"%s ",words);
//                    all++;
//                    cnt++;
//                    flag = 0;
//                }
//            }
//            if(flag){
//                fprintf(put, "%s ",words);
//                all++;
//            }
//        }
//    }
//    else{
//        printf("Can't open file!\n");
//    }
//    printf("%d\n",cnt);
//    freopen(NULL,"r", put);
//    for(int i = 0;i<all-1;i++){
//        fscanf(put,"%s",words);
//        printf("%s ",words);
//    }
//    fscanf(put,"%s",words);
//    printf("%s",words);
//    fclose(fp);
//    fclose(put);
//    return 0;
//}