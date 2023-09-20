#include<stdio.h>
int main()
{
   int n,num=1;
   printf("Enter the value of n: ");
   scanf("%d",&n);


   while(num<=n)
	{
		if(num%2==0)
        {
            printf("%d ",num);
        }
		num++;
	}
    return 0;
}