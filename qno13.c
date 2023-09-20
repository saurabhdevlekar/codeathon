#include<stdio.h>
//Write a program by using switch case if user enter 11 it will have are area of
//circle and when user enter 22 it will have area of rectangle and when user enter
//33 it will give area of square when user enter 44 it will give area of triangle. 
int main()

{
    int a;
    printf("enter the choise 11) Area of circle 22) area of rectangle 33) area of square 44 )area of triangle.");
    scanf("%d",&a);

    switch (a)
    {
    case 11:
        float r,c;
        float pi=3.14;
        printf("Enter radius");
        scanf("%f",&r);
        c=pi*r*r;
        printf("Area of circle is %f ",c);
        break;
    case 22:
        int l,b,c;
        printf("area of rectangle");
        scanf("%d%d",&l,&b);
        c=l*b;
        printf("area of rectangle  ",c);
        break;
    case 33:
        /* code */
        break;
    case 44:
         int l,b,h,c;
        printf("area of triangle");
        scanf("%d%d%d",&l,&b,&h);
        c=l*b*h;
        printf("area of rectangle  ",c);
        
        break;
    
    default:
        break;
    }
}
