// 1/1!+1/2!+1/3!+.................+1/n!  


#include<stdio.h>
int main(){
    int num,i,f=1;
    float sum=0;
    printf("Enter the number of terms");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        f=f*i;
        sum=sum+(1.0/f);
    }
    printf("The sum of %d terms of series is: %f",num,sum);
}