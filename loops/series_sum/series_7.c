// 1+12+123+1234...............n terms


#include<stdio.h>
int main(){
    int n,i,j=1,num=1,sum=0;
    printf("Enter no. of terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d ",num);
      sum=sum+num;
      num=num*10+i+1;
    }
    printf("\nSum is:%d",sum);
}
