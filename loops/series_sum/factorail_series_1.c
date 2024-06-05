/*Series 1!+2!+3!+4!..................+n!*/

#include<stdio.h>
int main(){
    int num,i,f=1,sum=0;
    printf("Enter the number of terms");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        f=f*i;
        sum=sum+f;
    }
    printf("The sum of %d terms of series is: %d",num,sum);
}
