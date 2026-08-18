#include <stdio.h>
int main()
{
    int s;
    printf("Enter how many star you want\n");
    scanf("%d", &s);
    
    for (int i = 1; i <= s; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    for (int i = s; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}