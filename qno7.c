#include<stdio.h>
//Write a program in C to read any Month Number in integer and display Month name in
//the word.(using switch case).
int main()
{
    int a;
    printf("Enter the date 1,2,3,4,5,6,7,8,9,10,11,12 : ");
    scanf("%d",&a);

    switch (a)
    {
    case 1 :
         printf("Month is janvary");
        break;
    case 2 :
         printf("Month is fab");
        break;   
    case 3 :
         printf("Month is march");
        break;
    case 4 :
         printf("Month is april");
        break;
    case 5 :
         printf("Month is may");
        break;
    case 6 :
         printf("Month is jun");
        break;
    case 7 :
         printf("Month is july");
        break;
    case 8 :
        printf("Month is aug");
        break;
    case 9 :
         printf("Month is saptember");
        break;
    case 10 :
         printf("Month is octomber");
        break;
    case 11 :
         printf("Month is november");
        break;
    case 12 :
         printf("Month is dis");
        break;

    default:
        break;
    }
}
