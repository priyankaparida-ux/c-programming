/*find the average of three numbers*/
#include<stdio.h>
int main()
{
    int num1,num2,num3,avg;

    printf("Enter three numbers: ");
    scanf("%d%d%d",&num1,&num2,&num3);

    avg = (num1 + num2 + num3)/3;

    printf("The average of %d,%d and %d is %d",num1,num2,num3,avg);

    return 0;
}