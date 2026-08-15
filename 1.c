#include<stdio.h>

int AreaOfRectangle(int l, int b){
    return l*b;
}

int main(){
    int length,breadth;
    printf("Enter the length and breadth\n");
    scanf("%d%d",&length,&breadth);
    int result = AreaOfRectangle(length,breadth);
    printf("The area is %d",result);
 return 0;
}
