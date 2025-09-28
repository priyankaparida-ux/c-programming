/*swap the values of two variables using a third variable*/
#include<stdio.h>
int main()
{
    int a,b;

    printf("Before swapping: \n");
    printf("a = ");
    scanf("%d",&a);
    printf("b = ");
    scanf("%d",&b);

    int c;

    c = a;
    a = b;
    b = c;

    printf("After swapping:\na = %d\nb = %d",a,b);

    return 0;
}