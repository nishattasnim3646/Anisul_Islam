#include<stdio.h>
int main(){
    int n, row,col;
    printf("Enter row number:");
    scanf("%d",&n);
    for(row=n;row>=1;row--){
        for(col=2*(n-row);col>=1;col--){
            printf(" ");
        }

        for(col=2*row-1;col>=1;col--){
            printf("%d ",row);
        }
        printf("\n");
    }

return 0;
}  