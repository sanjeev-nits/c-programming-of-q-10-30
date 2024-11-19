#include<stdio.h>

void main()
{
    int a[5]={14,10,4,6,5},i,j,n=5,min,temp;
    
  for (i = 0; i < n - 1; i++) {
        min = i;

        for (j = i + 1; j < n; j++) {
            if (a[j]< a[min]) {
                min = j;
            }
        }

        if (min != i) {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    for(i=0;i<n;i++)
    printf("%d  ",a[i]);
}