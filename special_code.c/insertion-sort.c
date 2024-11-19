#include<stdio.h>

void main()
{
    int a[100],i,j,temp,n;

    printf("entre the value of n ");
    scanf("%d",&n);

    printf("entre the %d value",n);

    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("the sortest number are \n");

    for(i=0;i<n;i++)
    printf("%d  ",a[i]);
}