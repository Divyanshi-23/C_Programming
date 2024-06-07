// 1+4+9+16+...............

#include<stdio.h>
int main(){
    int num,i,j=1,sum=0;
    printf("Enter the number of terms \n");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {   
        sum=sum+j;
        j=j+2*i+1;
    }
    printf("The sum of %d terms of series is: %d",num,sum);
}