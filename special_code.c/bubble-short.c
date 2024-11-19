#include<stdio.h>

void main()
{
int a[100],i,j,c,n;

printf("entre the value of n");
scanf("%d",&n);
printf("enrte the %d array value \n",n);

for(i=0;i<n;i++)
scanf("%d",&a[i]);

for(i=0;i<n-1;i++)
{
for(j=0;j<n-1-i;j++)
{
    if(a[j]>a[j+1])
    {
        c=a[j];
        a[j]=a[j+1];
        a[j+1]=c;
    }
}
}
printf("the sortest number are  \n");
for(i=0;i<n;i++)
printf("%d  ",a[i]);


}