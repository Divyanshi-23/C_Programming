#include<stdio.h>
int main(){
     int num,i,n1,n2,hcf,lcm,n,m,a;
    printf("Enter the numbers");
        scanf("%d %d",&n1,&n2);
        if(n1>n2)
       { n=n1;
        m=n2;
        }
        else{
            n=n2;
        m=n1;
        }
        while(a!=0){
            a=n%m;
            n=m;
            m=a;
        }
        hcf=n;
        printf("HCF= %d",hcf);
         }