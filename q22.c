#include<stdio.h>

void main()
{
int n,i,a[100];
float sum;


printf("entre the number");
scanf("%d",&n);
//for storing array & sum all array
for(i=0;i<n;i++){
scanf("%d",&a[i]);
sum+=a[i];
}

//for average of n array
printf("the average of  array =%f",sum/n);


}