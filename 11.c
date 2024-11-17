#include<stdio.h>
#include<math.h>
void main()
{
int n,digit=0,rem,sum=0,m;

printf("entre the cheak for armstrong value n ");
scanf("%d",&n);
m=n;

while(n>0){
    n=n/10;
    digit++;
}
n=m;
while(n>0){
    rem=n%10;
    sum+=pow(rem,digit); 
    n=n/10; 
}

if(sum==m){
    printf("this number  %d is armstrong number",m);
}
else{
    printf("this number  %d is not armstrong number",m);

}

}