#include<stdio.h>
int main(){
    int num,i,n,k=0;
    printf("Enter the number");
    scanf("%d",&n);
        for(i=n;i%10!=0;i=i/10){
    num=k*10+(i%10);
    k=num;
    }
    if(n==num)
    printf("Number is a palindrom");
    else
    printf("Number is not a palindrom");
}