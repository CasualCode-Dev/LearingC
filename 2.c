#include<stdio.h>

void circle(int r){
    float area = 3.14*r*r;
    float circumference = 2*3.14*r;

    printf("The area of rectanle is %f\n",area);
    printf("The circumference of rectanle is %f\n",circumference);
}

int main(){
    int radius;
    printf("Enter the radius\n");
    scanf("%d", &radius);
    circle(radius);
return 0;
}