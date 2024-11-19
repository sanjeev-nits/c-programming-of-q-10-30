#include<stdio.h>

void main()
{
int a[100],i,j,c,n,data,start=0,end,mid,found=0;

printf("entre the value of n ");
scanf("%d",&n);

printf("entre %d numbers  ",n);
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
printf("entre the number you want to search   ");
scanf("%d",&data);

for(i=0;i<n;i++)
printf("%d  ",a[i]);
end=n-1;

while(start<end){
    mid=(start+end)/2;

    if(a[mid]==data){
        printf("the %d  is %d position ",data,mid+1);
        found=1;
        break;
    }
    else if(a[mid]<data)
    start=mid+1;

    else if(a[mid]>data)
    end=mid;
}

if(found==0){
    printf("you enrtre invalide number");
}

}
