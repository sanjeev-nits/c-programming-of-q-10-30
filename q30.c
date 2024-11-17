#include<stdio.h>

void main()
{
int a[3][3],r,c,n=3;
int chk=0;

printf("entre the matrix entries");

for(r=0;r<n;r++)
{
    for(c=0;c<n;c++)
    {
    scanf("%d",&a[r][c]);  
    }
}

//for priting matrix
for(r=0;r<n;r++)
{
    for(c=0;c<n;c++)
    {
    printf("%d  ",a[r][c]);
    }
    printf("\n");
}
//for chekhing identity

for(r=0;r<n;r++)
{
    for(c=0;c<n;c++)
    {
    if(r==c & a[r][c]!=1){
        printf("Given Matrix id not identity");
        chk++;
        goto A;
    }
    else if (r!=c & a[r][c]!=0)
    {
        printf("Given matrix is not identity");
        chk++;
        goto A;
    }    
    }
}
    A:
    if(chk==0){
        printf("this matrix is identity matrix");
    }
}