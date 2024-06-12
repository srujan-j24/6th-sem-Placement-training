#include<stdio.h>

float triangleArea(int base, int height){
    return 0.5 * base * height;
}

float circleArea(int radius){
    return (float)22 / 7 * radius * radius;
}

int recatngleArea(int height , int width){
    return height * width;
}

int squareArea(int side){
    return side * side;
}

int main(){
    int r;
    printf("Enter the radius of Circle: ");
    scanf("%d",&r);
    printf("The area of cricle is %f\n", circleArea(r));

    int b, h;
    printf("Enter the base and height of a triangle: \n");
    scanf("%d%d",&b, &h);
    printf("The area of triangle is %f\n", triangleArea(b, h));

    int s; 
    printf("Enter the side of a square: ");
    scanf("%d",&s);
    printf("The aref of square is %d\n", squareArea(s));

    int w;
    printf("Enter the height and breadth of rectangle: \n");
    scanf("%d%d",&h, &w);
    printf("THe area of reactangle is %d\n", recatngleArea(h, w));

    return 0;
}