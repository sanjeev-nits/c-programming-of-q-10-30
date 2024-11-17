#include<stdio.h>

void main()
{
int a[100],i,j,n,element;

printf("entre the value of n");
scanf("%d",&n);

//for storing array
for(i=0;i<n;i++)
scanf("%d",&a[i]);

printf("entre the position");
scanf("%d",&j);

printf("entre the element value");
scanf("%d",&element);

//for jagah kahali karne ke liye
for (i= n-1;i >=j-1;i--) {
        a[i+1]=a[i];
    }
// Insert the new element at the specified position
    a[j-1]=element;
    
for(i=0;i<n+1;i++)
printf("%d\n",a[i]);
}