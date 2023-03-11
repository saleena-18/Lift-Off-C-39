#include<stdio.h>
void main()
{
    float rad, d, area, circum, pi=3.14;
    printf("Enter radius of circle: ");
    scanf("%f",&rad);
    d=2*rad;
    circum=2*pi*rad;
    area=pi*rad*rad;
    printf("\nDiameter of circle=%f",d);
    printf("\nCircumference of circle=%f",circum);
    printf("\nArea of cirle=%f",area);

}