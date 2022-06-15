#include <stdio.h>

int main(){
    float num1, num2, num3;
    printf("Enter your 3 numbers: ");

    scanf("%f %f %f", &num1, &num2, &num3);
    printf("%f", (num1 + num2 + num3)/3);
    return 0;
}