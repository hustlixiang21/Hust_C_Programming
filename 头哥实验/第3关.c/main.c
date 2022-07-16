#include<stdio.h>
int main()
{
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);
    if(A==B) printf("A %d",A);
    else if(B==C) printf("B %d",B);
    else if(A==C) printf("A %d",A);
    else if(A>B)
    {
        if(C<B)
        {
            printf("B %d",B);
            return 0;
        }
        if(C>A)
        {
            printf("A %d",A);
            return 0;

        }
        if(C<A)
        {
            printf("C %d",C);
            return 0;
        }
    }
    else if(A<B)
    {
        if(C<A)
        {
            printf("A %d",A);
            return 0;
        }
        if(C>B)
        {
            printf("B %d",B);
            return 0;
        }
        if(C<B)
        {
            printf("C %d",C);
            return 0;
        }
    }
    return 0;
}