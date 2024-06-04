#include<stdio.h>
int main(){
    int num,i,cube;
    printf("Enter the number");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        cube=i*i*i;
        printf("\ncube of %d is:%d",i,cube);
        if (cube>=32767)
        break;
    }
}