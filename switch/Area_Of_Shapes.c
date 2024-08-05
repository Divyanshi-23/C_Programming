// Calcultating area of different shapes

#include<stdio.h>
int main(){
    int a,r,l,b,h;
    printf("Enter the shape\ncircle press 1\nrectangle press 2\ntriangle press 3");
    scanf("\n%d",&a);
    switch(a){
        case 1:
        printf("Enter radius");
        scanf("%d",&r);
        printf("Area of circle is:%f",3.14*r*r);
        break;
        case 2:
        printf("Enter length and breadth");
        scanf("%d %d",&l,&b);
        printf("Area of rectangle is:%d",l*b);
        break;
        case 3:
        printf("Enter base and height");
        scanf("%d %d",&l,&h);
        printf("Area of triangle is:%f",0.5*b*h);
        break;
        default:
        printf("Invalid entry");
    }
}
