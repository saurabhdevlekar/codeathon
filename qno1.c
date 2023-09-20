#include<stdio.h>
//Write a program to find the cube of a number use loop.
#include <stdio.h>
void main()
 {
    int i,c;
    printf("Enter the number for cube : ");
    scanf("%d", &c);
    for(i=1;i<=c;i++)
    {
	 printf("Number is : %d and cube of the %d is :%d \n",i,i, (i*i*i));     
    }
 }


 
     
  
