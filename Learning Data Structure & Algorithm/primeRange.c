#include<stdio.h>

int main(){

    int num;
    printf("Enter Number: ");
    scanf("%d", &num);

    for (int i = 2; i < num; i++)
    {
       int temp = 1;
        for (int j = i; j < num; j++)
        {
            if (i % j == 0)
            {
                temp = 0;
                break;
            }
            
            if (temp ==1)
            {
                printf("prime number %d\n", i);
            }
            
        } 
    }
    

    return 0;
}