#include<stdio.h>

void main()
{
int a[100],i,n,j;
printf("entre the value of n");
scanf("%d",&n);
//for storing array 
for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("Entre which place you wnat to delete ");
scanf("%d",&j);

//for deleting code
for(i=j-1;i<n-1;i++)
a[i]=a[i+1];

for(i=0;i<n-1;i++)
printf("%d\n",a[i]);

}
