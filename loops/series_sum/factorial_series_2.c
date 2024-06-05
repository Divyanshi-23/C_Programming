// 1/1!+2/2!+3/3!+.................+n/n!  

#include<stdio.h>
int main(){
    int num,i,f=1,j;
    float sum=0,k;
    printf("Enter the number of terms");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        f=1;
        for(j=1;j<=i;j++)
        {
        f=f*j;
        }
        sum=sum+(i/f);
    }
    printf("The sum of %d terms of series is: %f",num,sum);
}