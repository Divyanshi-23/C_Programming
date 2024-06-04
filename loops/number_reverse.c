#include<stdio.h>
int main(){
    int n,i,num,k=0;
printf("Enter the number");
    scanf("%d",&n);
    for(i=n;i%10!=0;i=i/10){
    num=k*10+(i%10);
    k=num;
    }
    printf("the number is %d",num);
}