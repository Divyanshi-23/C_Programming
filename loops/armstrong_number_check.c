#include<stdio.h>
int main(){
    int i,n,sum=0,k;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=n;i>0;i=i/10){
        k=i%10;
        sum=sum+(k*k*k);
    }
    if(n==sum)
    printf("It is an armstrong number");
    else
    printf("It is not an armstrong number");
}