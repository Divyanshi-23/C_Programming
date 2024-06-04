#include<stdio.h>
int main(){
     int num,i,n1,n2,hcf,lcm;
    printf("Enter the numbers");
    scanf("%d %d",&n1,&n2);
    if(n1>n2)
     hcf=n2;
     else
     hcf=n1;
     while(1){
        if(n1%hcf==0 &&n2%hcf==0)
        {
            printf("\nHCF is:%d",hcf);
            break;
        }
        else
        hcf--;
     }
     if(n1>n2)
     lcm=n1;
     else
     lcm=n2;
     while(1){
        if(lcm%n1==0 && lcm%n2==0)
        {
            printf("\nLCM is:%d",lcm);
            break;
        }
        else
        lcm++;
     }

    }
