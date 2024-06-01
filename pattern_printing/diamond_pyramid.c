#include<stdio.h>
int main(){
    int i,j,k,n,star=1;
    printf("Enter rows");
    scanf("%d",&n);
    k=n/2;
    for(i=1;i<=n;i++){
        for(j=0;j<k;j++){
    printf(" ");
        }
        for(j=1;j<=star;j++){
         printf("*");
        }
        printf("\n");
        if(i>=n/2)
        {
            star-=2;
            k+=1;
        }
        else{
            star+=2;
            k-=1;
        }
    }
}