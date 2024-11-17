#include<stdio.h>

void main(){

    int a1=0,a2=1,a3,i;

    printf("%d %d ",a1,a2);

    for(i=2;i<10;i++){
        a3=a1+a2;
        printf(" %d",a3);
        a1=a2;
        a2=a3;
    }
}