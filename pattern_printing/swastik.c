// Printing Swastik

#include<stdio.h>
int main(){
    int n,i,j,k,l,h;
    char c;
    printf("\nEnter the number of lines");
    scanf("%d",&n);
     printf("\nEnter the character");
      scanf(" %c",&c);
      k=n/2+1;
      l=k-2;
      h=k+2;
      for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
           if(i==1)
           {
           if(j>=k||j==1)
           printf(" %c",c);
           else
           printf("  ");
        }
        else if(i==n)
        {
            if(j<=k||j==n)
              printf(" %c",c);
              else
               printf("  ");
        }
        else if (i==k||j==k)
                printf(" %c",c);

         else if(i<k){
            if(i!=l){
            if(j==1)
            printf(" %c",c);
             else
               printf("  ");
          }
          else{
            if(j==1||j==l||j==h)
             printf(" %c",c);
               else
               printf("  ");
          }
         }
         else if(i>k){
           if(i!=h){
            if(j==n)
            printf(" %c",c);
             else
               printf("  ");
          }
          else{
            if(j==n||j==l||j==h)
             printf(" %c",c);
               else
               printf("  ");
          }}       }
        printf("\n");
      }     
}