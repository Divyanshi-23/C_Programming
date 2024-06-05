// 1!+3!+5!.....................n!

int main(){
    int num,i,j,f,sum=0,k=1;
    printf("Enter the number of terms");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        f=1;
        for(j=1;j<=k;j++)
        {  
            f=f*j;
        }
        k=k+2;
        sum=sum+f;
    }
    printf("The sum of %d terms of series is: %d",num,sum);
}
