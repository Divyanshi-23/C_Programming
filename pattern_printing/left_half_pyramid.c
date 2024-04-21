// Example : Enter the number of rows
// 5

// Enter the character
// *


//      *
//     **
//    ***
//   ****
//  *****


#include<stdio.h>
int main(){
    int i,j,k,n;
    char c;
    printf("\nEnter the number of rows\n");
    scanf("%d",&n);
     printf("\nEnter the character\n");
    scanf(" %c",&c);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
        for(k=n;k>=i && j==1;k--)
        printf(" ");
        printf("%c",c);
    }   printf("\n");}

}
