#include<stdio.h>
int main(){
    int i,n,num,sum=0,average=0;
    printf("How many Numbers :");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        printf("\nEnter number");
        scanf("\n%d",&n);
        sum=sum+n;
        average=sum/i;
    }
    printf("\nsum=%d",sum);
    printf("\naverage=%d",average);
}
