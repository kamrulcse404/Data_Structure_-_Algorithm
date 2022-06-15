#include<stdio.h>
int pawe(int base, int pawer);

int main()
{
    int base, pawer;
    scanf("%d %d", &base, &pawer);
    int result = pawe(base, pawer);
    printf("%d \n", result);
    return 0;
}

int pawe(int base, int pawer)
{
    int result = 1;
    for (int i = 1; i <= pawer; i++)
    {
        result = result * base;
    }

    return result;
    
}