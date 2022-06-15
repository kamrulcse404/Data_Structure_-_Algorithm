#include<stdio.h>

int main(){
    int number;
    printf("Enter your number: ");
    scanf("%d", &number);
    if(number >= 1){
        printf("Natural Number \n");
    }else{
        printf("Not a natural number\n");
    }
    return 0;
}