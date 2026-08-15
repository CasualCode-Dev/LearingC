#include<stdio.h>

void CalculateAverage(int a, int b, int c){
    float average = (a+b+c)/3;
    printf("The average is %.2f",average);
}
int main(){
    int a,b,c;
    printf("Enter 3 numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    CalculateAverage(a,b,c);
    return 0;
}