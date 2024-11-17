#include<stdio.h>

void main(){

int n,j,i;
    printf("entre the value of n for pattern");
    scanf("%d",&n);

    for(i=1;i<=n;i++){

        for(j=i;j>0;j--){
            printf(" %d",j);
        }
        printf("\n");
    }
}