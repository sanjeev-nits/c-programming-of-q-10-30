#include<stdio.h>

void main()
{
int a[100],i,n,max,min;

printf("entre the value of n");
scanf("%d",&n);

//for storing array
for(i=0;i<n;i++)
scanf("%d",&a[i]);

//for maximam value
max=a[0];//let maximam array a[0]
for(i=1;i<n;i++)
{
if(a[i]>max)
max=a[i];
}
printf("the maximam value in array=%d\n",max);

min=a[0];//let minimam array a[0]
for(i=1;i<n;i++)
{
if(a[i]<min)
min=a[i];
}
printf("the minimam value in array=%d",min);


}