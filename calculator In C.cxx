#include <stdio.h>
int main()
{
    float a, b;
    char c;

    printf("Enter First Number \n");
    scanf(" %f", &a);

    printf("Enter Oprator (+,-,*,/) \n");
    scanf(" %c", &c);

    printf("Enter Second Number \n");
    scanf(" %f", &b);

    if (c == '+')
        printf("a + b= %f", a + b);

    else if (c == '-')
        printf("a - b= %f", a - b);

    else if (c == '*')
        printf("a * b= %f", a * b);

    else if (c == '/'&& b !=0 && a !=0)
    
        printf("a / b= %f", a / b);

    else if (c == '/' &&a ==0)
        printf("Number Cant devided by 0");
        
      else if (c == '/' && b ==0)
        printf("Number Cant devided by 0");
}