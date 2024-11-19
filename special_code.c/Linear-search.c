#include<stdio.h>

void main()
{
    int a[100],data,i,j,n,c,found=0;

    printf("entre the value of n");
    scanf("%d",&n);

    printf("entre the %d array",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                c=a[j];
                a[j]=a[j+1];
                a[j+1]=c;
            }
        }
    }
    printf("entre the number you want to search ");
    scanf("%d",&data);

    for(i=0;i<n;i++)
    {
        if(a[i]==data){
        printf("\n the number %d is %d position ",data,i+1);
        found++;
        }
    }

    if(found==0)
    printf("you entre the invlid number");   
}