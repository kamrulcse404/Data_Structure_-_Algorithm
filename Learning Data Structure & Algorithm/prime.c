#include<stdio.h>

int main(){

    int num, temp = 1;
    printf("Enter your Number: ");
    scanf("%d", &num);
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            temp = 0;
            break;
        }     
    }

    if (temp == 1)
    {
        printf("This is prime number\n");
    }else{
        printf("This is not prime number\n");
    }
    
    
    return 0;
}