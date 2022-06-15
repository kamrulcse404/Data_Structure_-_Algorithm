#include <stdio.h>

int main(){

    char character;
    printf("Enter your character: ");
    scanf("%c", &character);
    
    printf("%d\n", character >= '0' && character <= '9');
    

    return 0;
}