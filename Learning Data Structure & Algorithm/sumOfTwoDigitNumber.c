#include<stdio.h>
int sum(int num1, int num2);

int main(){

    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int result = sum(num1, num2);
    printf("Sum = %d\n", result);
    return 0;
}

int sum(int num1, int num2){

     if ((num1 > 9 && num1 < 100) && (num2 > 9 && num2 < 100))
    {
        return num1 + num2;
    }
}