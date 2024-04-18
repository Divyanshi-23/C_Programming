/*       1
        121
       12321
      1234321  */
#include<stdio.h>
int main(){
     int i,j,k,n,l=1,x=0,check=0;
    printf("\nEnter the number of rows\n");
    scanf("%d",&n);
    for(i=1;i<=2*n;i=i+2){
        check=0;
        x=0; 
        for(j=i;j<=2*n;j++)
            printf(" ");
            for(k=1;k<=i;k++){
            printf(" %d",l+x);
            if(check==0)
            x++;
            else
            x--;
            if((i/2)==k)
            check=1;
            }
         printf("\n");
    }
}