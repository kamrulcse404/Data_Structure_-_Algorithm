#include<stdio.h>

int main(){

    float width, length;
    printf("input width value of rectangle: ");
    scanf("%f", &width);

    printf("input length value of rectangle: ");
    scanf("%f", &length);

    printf("Perimeter of rectangle %f\n", 2*(width + length));
    return 0;
}