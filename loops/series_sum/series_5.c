// 1,-1,1,-1,.............n terms

#include<stdio.h>
#include<stdio.h>
int main(){
    int n,i,a=-1,sum=0;
    printf("Enter no. of terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        a=a*-1;
        sum = sum + a;
        printf("%d ",a);
    }
        printf("\nsum = %d ",sum);
    
}
