#include <stdio.h>

int main(){

    int number, sum = 0;
    printf("Enter Number: ");
    scanf("%d", &number);
    int temp = number;

    while (temp > 0)
    {
        int mod = temp % 10;
        sum += mod * mod * mod;
        temp /= 10;
    }

    if (sum == number)
    {
        printf("This is Armstrong Number \n");
    }else{
        printf("This is not Armstrong Number \n");
    }
    
    
    return 0;
}