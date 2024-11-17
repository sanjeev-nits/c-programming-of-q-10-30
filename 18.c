#include<stdio.h>

void main(){

    int n,i,j,m=1;

    printf("entre the number of pattern show value of n ");
    scanf("%d",&n);

    for(i=0;i<=n;i++){
        for(j=1;j<=n-i;j++){
            printf("%d ",m++);
        }
        printf("\n");
    }
}