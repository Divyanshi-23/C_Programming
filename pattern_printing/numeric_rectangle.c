/* Prints a rectangle such that the numbers are arranged in n-1 order at each layer */
/* Example input number of rows:5
    5 5 5 5 5 5
    5 4 4 4 4 5
    5 4 3 3 4 5
    5 4 4 4 4 5
    5 5 5 5 5 5
*/

#include<stdio.h>
int main(){
    int i,j,k,n,l=0,m,f=0,p;
    printf("\nEnter the number of rows\n");
    scanf("%d",&n);
    k=n;
    m=2*n-1;  
     for(i=1;i<=m;i++){
           
        for(j=1;j<=m;j++){
            if(j<=l){
                printf("%3d",k-f);
                f++;
                }
                else{
            if(j>(m-l))
            {     f--;
                 printf("%3d",k-f);
            }
            else{
                  printf("%3d",k-l);
            } }}
            if(i<m/2+1) l++;
           else l--;
         printf("\n");
         }
    }
