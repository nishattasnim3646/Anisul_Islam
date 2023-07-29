for(row=n;row>=1;row--){
        for(col=n-row;col>=1;col--){
            printf(" ");
        }

        for(col=1;col<=2*row-1;col++){
            printf("%c",col+64);
        }
        printf("\n");
    }

return 0;
}  