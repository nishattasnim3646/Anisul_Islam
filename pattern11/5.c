#include<stdio.h>
int main(){
    int n, row,col;
    printf("Enter row number:");
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            printf(" ");
        }

        for(col=1;col<=row;col++){
            printf("%c ",row+64);
        }
        printf("\n");
    }

return 0;
}  