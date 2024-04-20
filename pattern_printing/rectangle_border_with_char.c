#include<stdio.h>
int main(){
    int i,j,k,n;
    char c;
    printf("\nEnter the number of rows\n");
    scanf("%d",&n);
     printf("\nEnter the character\n");
    scanf(" %c",&c);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if((i==1||i==n)||(j==1||j==n)){
                 printf(" %c",c); 
            }
            else
                  printf("  ");
            
        }
        printf("\n");
    }
}


// Enter the number of rows
// 5

// Enter the character
// *

//  * * * * *
//  *       *
//  *       *
//  *       *
//  * * * * *