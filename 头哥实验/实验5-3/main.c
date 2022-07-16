#include <stdio.h>
int count=0;
int available(int curRow,int curCol,int queen[])
{
    for(int row=0;row<curRow;row++)
    {
        if(curCol==queen[row]) return 0;
        if((curRow-row)==(curCol-queen[row])) return 0;
        if((curRow-row)==(queen[row]-curCol)) return 0;
    }
    return 1;
}
void putQueen(int row,int queen[],int N)
{
    int col;
    if(row==N)
    {
        count++;

    }
    for(col=0;col<N;col++)
    {
        if(available(row,col,queen))
        {
            queen[row]=col;
            putQueen(row+1,queen,N);
        }
    }
}
int main()
{
    int N;
    scanf("%d",&N);
    int queen[N];
    putQueen(0,queen,N);

    if(count==0) printf("无解");
    else printf("%d",count);
}
