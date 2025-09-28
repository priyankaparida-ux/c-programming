/*Area of the triangle*/
#include<stdio.h>
int main()
{
    int base,height,area;

    printf("Enter the base of the triangle: ");
    scanf("%d",&base);

    printf("Enter the height of the triangle: ");
    scanf("%d",&height);

    area = 0.5 * base * height;

    printf("Area of the triangle is %d",area);

    return 0;
}