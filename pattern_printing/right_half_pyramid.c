// *
// *
// **
// ***
// *****

#include<stdio.h>
int main(){
    int i,j,n;
    char c;
    printf("\nEnter the number of rows\n");
    scanf("%d",&n);
     printf("\nEnter the character\n");
    scanf(" %c",&c);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++)
        printf("%c",c);
        printf("\n");
    }

}
