// 1,11,111,1111..............n terms

#include<stdio.h>
int main(){
    int n,i,j=1,num=1,sum=0,m=1;
    printf("Enter no. of terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
      printf("%d ",num);
      num=num*10+j;
    }
    for(i=1;i<=n;i++){
        sum=m+sum;
        m=m*10+j;
    }
    printf("Sum is %d",sum);
}
