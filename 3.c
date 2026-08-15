#include<stdio.h>

void SimpleInterest(int p,float r,int t){
    float SimpleI = (p*r*t)/100;
    printf("The simple interset is %f",SimpleI);  
}
int main(){
    int principal;
    float rate;
    int time;
    printf("Enter the principal,rate,time\n");
    scanf("%d%f%d",&principal,&rate,&time);
    SimpleInterest(principal,rate,time);

    return 0;
}