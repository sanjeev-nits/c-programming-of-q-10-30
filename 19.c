#include<stdio.h>

void main(){
    int i,j,k,n;

    printf("entre the value of n");
    scanf("%d",&n);

    for(i=1;i<=n;i++){

        for(j=n-i;j>0;j--){
            printf("  ");
        }
        for(k=1;k<=i;k++){
            printf(" %d",k);
        }
        printf("\n");

    }
}