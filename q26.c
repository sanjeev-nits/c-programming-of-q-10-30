#include<stdio.h>

void main()
{

int a[100],even[100],odd[100],i,n;
int j=0,k=0;

printf("entre the value of n");
scanf("%d",&n);

//here i storing array and divided by even and odd

for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
    if(a[i]%2==0)
    {
    even[j]=a[i];
    j++;
    }
    else
    {
    odd[k]=a[i];
    k++;
    }
}

printf("the even array are \n");
for(i=0;i<j;i++)
printf("%d\n",even[i]);

printf("the odd array are \n");
for(i=0;i<k;i++)
printf("%d\n",odd[i]);


}