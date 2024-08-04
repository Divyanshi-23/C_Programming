/*write a program to create simple calculator using switch.
wap to compute the area of various geometrical shapes using switch case.
wap to accept day number and display its equivalent day name in the words
wap to accept the grade and display their grade are as follows: excellent E,very good,good,average,fail*/


#include<stdio.h>
int main(){
    int num1,num2;
    char ch;
    printf("Enter the numbers");
    scanf("%d %d",&num1,&num2);
    printf("\nEnter the operation");
     scanf(" %c",&ch);
    switch(ch){
        case('+'):printf("\noperation add \nanswer=%d",num1+num2);break;
         case('-'):printf("\noperation substract\nanswer=%d",num1-num2);break;
          case('*'):printf("\noperation multiply \nanswer=%d",num1*num2);break;
           case('/'):printf("\noperation divide \nanswer=%d",num1/num2);break;
            case('%'):printf("\noperation remainder \nanswer=%d",num1%num2);break;
           default:printf("\ninvalid input");
    }
}
