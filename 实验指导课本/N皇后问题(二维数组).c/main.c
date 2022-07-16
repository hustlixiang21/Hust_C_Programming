#include <stdio.h>
/** 全局变量定义棋盘 **/
int a[maxsize][maxsize]={0};
int size;
int answer_num=1;
void print()
{
    int i,j;
    printf("THE %d ANSWER:\n\n",answer_num++);
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(a[i][j]==1) printf(" ● ");
            else printf(" ○ ");
           printf("\n\n");
        }
         printf("\n\n");
}
    void solve(int row)
    {
        int i,j;
        //最后一行已经放上了皇后，所以此时要把棋盘打印出来
        if(row>=size) print();
        else
            {  for(i=0; i<size ;i++)//如果(row,i)这个位置可以放皇后//才进行下面的操作：放皇后，然后找基于这个所放位置的全部解。
                if(unguarded(row,i))
                {//(row,i)放上皇后
                    a[row][i]=1;
                  //然后在row+1行放皇后
                solve(row+1);
                //把基于(row,i)的解都求出来之后，移除(row,i)上的皇后
                //下一轮循环会找基于(row,i+1)的解
                a[row][i]=0;
                }
            }
    }


int main(int argc, const char * argv[])
{
    printf("棋盘大小请输入一个1-20之间的数\n");
    scanf("%d",&size);
    while(size<=0||size>maxsize)
    {
        printf("请输入一个有效的数!\n");
        scanf("%d",&size);
    }
        solve(0);
    return 0;
}

