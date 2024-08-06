#include<stdio.h>
int main(){
     char ch;
    printf("Enter the character");
    scanf("\n%c",&ch);
    if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z')){
    switch(ch){
        case 'a': case 'A': case 'e': case 'E':
        case 'i': case'I': case'o': case 'O': 
        case 'u': case 'U':
       printf("%c is a vowel",ch); break;
       default :
         printf("%c is a consonent",ch);
    }}
    else
      printf("Invalid");
      }