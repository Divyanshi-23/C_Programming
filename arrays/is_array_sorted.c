
#include<stdio.h>
int main(){
int arr[5],count=0,j,i,max=0,check=-1;
printf("\nElements of array");
for(i=0;i<5;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<5;i++){
    if(arr[i]>max)
    {
        max=arr[i];
        check=1;
    }
    else{
        check=0;
        break;
    }
}
if(check==0)
printf("The array is not sorted");
else
printf("The array is sorted");
}
