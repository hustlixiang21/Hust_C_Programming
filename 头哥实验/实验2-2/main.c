#include <stdio.h>
int main() {
    int N,i,j,k,ans[8][8];
    scanf("%d",&N);
    for(i=0;i<=N;i++) ans[i][0]=1;
    for(i=0;i<=N;i++)
        for(j=1;j<=i;j++) ans[i][j]=ans[i][j-1]*(i-j+1)/j;
        for(i=0;i<=N;i++) {
            for(k=1;k<=3*N-2*i;k++) printf(" ");
            for(j=0;j<=i;j++) {
                printf("%d",ans[i][j]);
                if(ans[i][j]/10==0) printf("   ");
                else printf("  ");
            }
            printf("\n");
        }
        return 0;
}