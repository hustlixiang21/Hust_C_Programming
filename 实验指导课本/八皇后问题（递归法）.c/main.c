#include <stdio.h>
int queen[8];
int count=0;

void output()
{
    printf("\n第%2d种摆法:",count);
    for(int i=0;i<8;i++)
    {
        printf("%2d",queen[i]);
    }
}
int available(int curRow,int curCol)
{
    for(int row=0;row<curRow;row++)
    {
        if(curCol==queen[row]) return 0;
        if((curRow-row)==(curCol-queen[row])) return 0;
        if((curRow-row)==(queen[row]-curCol)) return 0;
    }
    return 1;
}
void putQueen(int row)
{
    int col;
    if(row==8)
    {
        count++;
        output();
    }
    for(col=0;col<8;col++)
    {
        if(available(row,col))
        {
            queen[row]=col;
            putQueen(row+1);
        }
    }
}
int main()
{
    putQueen(0);
    return 0;
}
