#include<stdio.h>

void main()
{
    int i,j,k,l,n;

    printf("entre the value of n for pattern");
    scanf("%d",&n);

    for(i=1;i<=n;i++){

        for(j=n-i;j>0;j--)
        printf("  ");

        for(k=1;k<=i;k++)
        printf(" %d",k);

        for(l=i;l>1;l--)
        printf(" %d",l-1);

    printf("\n");
    }
}