#include<stdio.h>

void main()
{
int a[100],i,n;
printf("entre number of array");
scanf("%d",&n);


printf("entre the array ");
for(i=0;i<n;i++)
    scanf("%d",&a[i]);

printf("the reverse array are");
//here printing for reverse array
for(i=0;i<=n;i++)
printf("%d\n",a[n-i]);


}