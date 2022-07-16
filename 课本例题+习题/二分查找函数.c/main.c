//二分查找必须建立在排序完成的基础上
#include <stdio.h>
int BinarySearch(int a[],int x,int n);
int main()
{
   int x[]={1,3,5,7,9,11,13,15,17,19},index;
   index= BinarySearch(x,11,10);//x是中间的那个数
   if(index!=-1) printf("find %d!\n",x[index]);
   else printf("not found!\n");
   return 0;
}
int BinarySearch(int a[],int x,int n)
{
    int front=0,back=n-1,middle;
    while(front<=back)
    {
        middle=(front+back)/2;
        if(x>a[middle]) front=middle+1;
        else if(x<a[middle]) back=middle-1;
        else return middle;
    }
    return -1;
}