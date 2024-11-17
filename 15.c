#include<stdio.h>
#include<math.h>

void main()
{
int n,i;
float sum=0;

printf("entre the value of number of series sum ");
scanf("%d",&n);
for(i=1;i<=n;i++){



    sum+=(1.0/(i*i));

}
printf("the sum of series = %f",sum);
}