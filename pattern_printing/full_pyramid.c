#include<stdio.h>
int main(){
    int i,j,k,n,x=1;
    printf("\nEnter the number of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
      for(j=1;j<=x;j++)  
       { 
        for(k=n;k>=i&&j==1;k--)
        {
            printf(" ");
        }
       printf("*");
       }
       x=x+2;
        printf("\n");
    }
}
