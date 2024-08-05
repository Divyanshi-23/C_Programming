//Printing Days of Week

#include<stdio.h>
int main(){
    int a;
    printf("enter the day between 1 to 7");
    scanf("%d",&a);
    switch(a){
        case 1: printf("Day is:\nMonday");break;
        case 2: printf("Day is:\nTuesday");break;
        case 3: printf("Day is:\nWednesday");break;
        case 4: printf("Day is:\nThursday");break;
        case 5: printf("Day is:\nFriday");break;
        case 6: printf("Day is:\nSaturday");break;
        case 7: printf("Day is:\nSunday");break;
        default:printf("Invalid");
    }
}