#include<stdio.h>
int main(){
    int days,months;
    printf("enter the month");
    scanf("%d",&months);
    switch(months){
        case 1: 
        case 7: case 3:
        case 8: case 5: case 10: case 12:
        days=31;
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        days=30;
        break;
        case 2:
        days=28;
        break;
        default: printf:"Ivalid";
    }
    if(days){
        printf("month %d having %d days",months,days);
    }
}