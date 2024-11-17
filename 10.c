#include<stdio.h>

void main(){

int sum=0,n,rem;

printf("entre the number ");
scanf("%d",&n);

while(n>0){

    rem=n%10;
    sum=sum*10+rem;
    n=n%10;
}
printf("the reverse of is %d",sum);
}