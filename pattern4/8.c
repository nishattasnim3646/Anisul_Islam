#include<stdio.h>
int main(){
    int n, row,col;
    printf("Enter row number:");
    scanf("%d",&n);
    for(row=1;row<=n;row++){
        for(col=n-row;col>=1;col--){
            printf(" ");
        }
        for(col=1;col<=row;col++){
            printf("#");
        }
        printf("\n");
    }
    return 0;
}