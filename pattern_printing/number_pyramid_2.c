#include<stdio.h>
int main(){
     int i,j,n,k,m=1;
    char c;
    printf("\nEnter the number of rows\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++){
        printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d ",m);
        m++;
        }
        printf("\n");
    }
}


// Enter the number of rows
// 5
//     1 
//    2 3 
//   4 5 6 
//  7 8 9 10 
// 11 12 13 14 15 
