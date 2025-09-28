/*find the area of the circle*/
#include<stdio.h>
int main()
{
    int radius,area;

    printf("Enter the area of the circle: ");
    scanf("%d",&radius);

    area = 3.14 * radius * radius;

    printf("The area of the circle is %d",area);

    return 0;
}