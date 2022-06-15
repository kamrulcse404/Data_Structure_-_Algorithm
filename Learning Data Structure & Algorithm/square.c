#include <stdio.h>
float squareRoot(float num);

int main(){

    float num;
    scanf("%f", &num);
    printf("%f\n", squareRoot(num));
    return 0;
}

float squareRoot(float num)
{
    float res;
    for (float i = 0.01; i * i <= num/2.0; i++)
    {
        res = i * i;
        if (res > num)
        {
            break;
        }
        
    }

    return res;    
}