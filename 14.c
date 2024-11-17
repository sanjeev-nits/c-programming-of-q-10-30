#include<stdio.h>

void main()
{

long int fact=1;
int n,i;

printf("entre the value of n ");
scanf("%d",&n);

for(i=1;i<=n;i++){
    fact*=i;

}
printf("%ld",fact);


}