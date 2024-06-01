/*   1
     1 2
     1   3
     1     4
     1 2 3 4 5*/
#include<stdio.h>
int main(){
    int i,j,k,n,x=1;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            if(j==1){
                printf("%d",j);
            }
            else{
            if (i==n){
                printf(" %d",j);
            }
            if(j==i&&i!=n){
                for(k=1;k<=x;k++)
                printf(" ");
            printf("%d",j);
            x=x+2;
             }} }
        printf("\n");
    }
}