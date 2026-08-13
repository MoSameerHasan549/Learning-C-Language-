#include<stdio.h>

int factorial( int number )
{ 
if (number == 1 || number == 0)
{
return 1 ;
}
else 
{
    number = number * factorial(number - 1);
return number;
}
}

int main()
{
	int num;
	printf("enter your number\n");
	scanf("%d", &num);
	
	printf("your factorial of %d is %d \n ",num, factorial(num));
	
	
}