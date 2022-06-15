#include <stdio.h>
void checkTemperature(int temp);

int main(){
    int temp;

    scanf("%d", &temp);

    checkTemperature(temp);
    
    return 0;
}

void checkTemperature(int temp){

    if (temp < 15)
    {
        /* code */
        printf("Cold Weather \n");
    }
    else{
        printf("Hot Weather \n");
    }
}