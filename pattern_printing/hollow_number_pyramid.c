#include<stdio.h>
int main(){
    int i,j,k,n,l=0,f=1,x=1;
    printf("Enter the number");
    scanf("%d",&n);
 for(i=1;i<=n;i++){
      for(j=1;j<=x;j++)  
       { 
        for(k=n;k>=i&&j==1;k--)
        {
            printf(" ");
        }
       if(j==1){
                printf("%d",j);
            }
            else{
            if (j<=i){
                if(i==n)
                printf("  %d",j);
                else
            printf("  ");
            }
            if(j==i&&i!=n)
            printf(" %d",j);
       }}
       x=x+2;
        printf("\n");
       
}}