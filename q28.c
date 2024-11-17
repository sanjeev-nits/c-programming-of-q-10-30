#include<stdio.h>
void main()
{

int a[3][3],b[3][3],m=3,n=3,r,c;

printf("entre the first matrix entries");

for(r=0;r<m;r++)
{
for(c=0;c<n;c++)
scanf("%d",&a[r][c]);

}
printf("entre the second matrix entries");

for(r=0;r<m;r++)
{
for(c=0;c<n;c++)
scanf("%d",&b[r][c]);

}

printf("sum of two matrix is \n");
for(r=0;r<m;r++)
{
for(c=0;c<n;c++){
printf("%d  ",a[r][c]+b[r][c]);
}
printf("\n");
}
}