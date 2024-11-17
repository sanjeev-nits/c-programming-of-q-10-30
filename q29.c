#include<stdio.h>

void main()
{
    int a[3][3],b[3][3],mul[3][3],n=3,r,c,i;

printf("entre the A matrix entries \n");

for(r=0;r<n;r++)
{
for(c=0;c<n;c++)
{
scanf("%d",&a[r][c]);
}
}


printf("entre the B matrix entries \n");

for(r=0;r<n;r++)
{
for(c=0;c<n;c++)
{
scanf("%d",&b[r][c]);
}
}


printf("matrix a and b multiplication is \n");
for(r=0;r<n;r++)
{
for(c=0;c<n;c++)
{
 mul[r][c]=0;
    //for cacluting matrix
for(i=0;i<n;i++){
    mul[r][c]+=a[r][i]*b[i][c];
}
printf("%d  ",mul[r][c]);
}
printf("\n");
}

}