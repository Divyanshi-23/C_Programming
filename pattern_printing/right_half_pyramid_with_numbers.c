#include<stdio.h>
int main(){
    int i,j,n;
    char c;
    printf("\nEnter the number of rows\n");
    scanf("%d",&n);
    
    for(i=1;i<=n;i++){
         
        for(j=1;j<=i;j++){
        printf("%d",j);
        
        }
        printf("\n");
    }

}


// Enter the number of rows
// 5

// 1
// 12
// 123
// 1234
// 12345
