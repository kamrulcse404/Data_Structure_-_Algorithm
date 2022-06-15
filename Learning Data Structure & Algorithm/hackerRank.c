#include<stdio.h>

int main(){

    int num1, num2;
    scanf("%d %d", &num1, &num2);
    for (int i = num1; i <= num2; i++)
    {
        int temp = 1, j;
        for (j = 2; j < num1; j++)
        {
            if (i / j == 0)
            {
                temp = 0;
                break;
            }            
        }
        if (j == num1)
        {
            printf("Prime Number %d\n", i);
        }               
    }  
    return 0;
}