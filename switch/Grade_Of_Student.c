#include<stdio.h>
#include<string.h>
int main(){
    int marks1,marks2,marks3,rollno;
    double percent;
    char fname[30],lname[30],grade;
    printf("enter the name");
    scanf("%s %s",&fname,&lname);
    printf("Enter roll no");
    scanf("%d",&rollno);
    printf("Enter marks of 3 subjects");
    scanf("%d %d %d",&marks1,&marks2,&marks3);
     percent=(marks1+marks2+marks3)/3;
     if(percent>90&&percent<=100)
     grade='E';
    else if(percent<=90&&percent>70)
     grade='V';
     else if(percent<=70&&percent>60)
     grade='G';
     else if(percent<=60&&percent>40)
     grade='A';
     else
     grade='F';
     switch(grade){
        case 'E':
        printf("%s %s\ngrade:%c\nroll no.=%d\n",fname,lname,grade,rollno);
        break;
         case 'V':
        printf("%s %s\ngrade:%c\nroll no.=%d\n",fname,lname,grade,rollno);
        break;
         case 'G':
        printf("%s %s\ngrade:%c\nroll no.=%d\n",fname,lname,grade,rollno);
        break;
         case 'A':
        printf("%s %s\ngrade:%c\nroll no.=%d\n",fname,lname,grade,rollno);
        break;
         case 'F':
        printf("%s %s\ngrade:%c\nroll no.=%d\n",fname,lname,grade,rollno);
        break;
        default:
        printf("enter valid marks");
     }}