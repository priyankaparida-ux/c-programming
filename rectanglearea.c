/*Area of the rectangle*/
#include<stdio.h>
int main()
{
    int length,height,area;

    printf("Enter the length of the rectangle :");
    scanf("%d",&length);

    printf("Enter the heigth of the rectange: ");
    scanf("%d",&height);

    area = length * height;

    printf("Area of the reactangle is %d",area);

    return 0;
}