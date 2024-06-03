// Sum of Whole Numbers
#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        sum=sum+i;
    }
    printf("\nsum=%d",sum);
}