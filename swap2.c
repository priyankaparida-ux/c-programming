/*swap two numbers without using a third variable*/
#include<stdio.h>
int main()
{
    int a,b;

    printf("Before swapping:\n");
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping: \na = %d\nb = %d",a,b);

    return 0;
}