#include<stdio.h>
int main(){
    int n,i,ans;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
       ans=n*i;
       printf("\n%d * %d =%d",n,i,ans);
    }
}