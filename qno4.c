 #include<stdio.h>
int main()
{
    int a,b;
    printf("\nEnter the 1st ");
    scanf("%d",&a);

    printf("\nEnter the 2nd");
    scanf("%d",&b);
    
    a==b?printf("Given 2 values are equal:%d",a):printf("Given two values are not equal:%d,%d",a,b);
    return 0;
}