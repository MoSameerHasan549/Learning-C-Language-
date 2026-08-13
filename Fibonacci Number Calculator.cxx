#include <stdio.h>

int main()
{
    int a;
    printf("How Much Fibonacci Number You Want?\n");
    scanf("%d",&a);
    
    int arre[a];
    arre[0] = 0;
    arre[1] = 1;

    printf("%d\n%d\n", arre[0], arre[1]);

    for (int i = 0;i <a -2; i++)
    {
        arre[i + 2] = arre[i + 1] + arre[i];

        printf("%d\n", arre[i + 2]);
    }
}