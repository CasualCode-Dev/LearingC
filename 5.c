#include<stdio.h>

void ConvertCelsiusToFahrenheit(int c){
    float Fahrenheit = (c*9/5) + 32;
    printf("The answer is %.2f",Fahrenheit);
}

int main(){
    float celsius;
    printf("Enter the temperature\n ");
    scanf("%f",&celsius);
    ConvertCelsiusToFahrenheit(celsius);
    return 0;
}