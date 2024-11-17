#include<stdio.h>
#include<math.h>

void main(){

int i,n,c=0;
printf("entre the value n");
scanf("%d",&n);

for(i=2;i<=sqrt(n);i++){
    if(n%i==0){
        c++;
    }
}
if(c==0){
    printf("the number %d is prime number",n);
}
else{
    printf("the mumber %d is not prime",n);
}

}