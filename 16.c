#include<stdio.h>

void main(){

    int i,j,n;
    printf("entre the value of n ");
    scanf("%d",&n);

    for(i=1;i<=n+1;i++){
        for(j=1;j<i;j++){
            printf("%d ",j);
        }
        printf("\n");
    }
}