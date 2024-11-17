#include<stdio.h>

void main()
{
  int r,c ,a[3][3],m=3,n=3;


printf("entre the entry of the matrix");
for(r=0;r<m;r++){
    for(c=0;c<n;c++){
     scanf("%d",&a[r][c]);
        }
    }

printf("the matrix is \n");
for(r=0;r<m;r++){
    for(c=0;c<n;c++){
     printf("%d  ",a[r][c]);
        }
    printf("\n");
    }
printf("the transpode matrix is \n");

for(r=0;r<m;r++){
    for(c=0;c<n;c++){
     printf("%d  ",a[c][r]);
        }
    printf("\n");
    }
}