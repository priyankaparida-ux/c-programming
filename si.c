/*calculate simple interest*/
#include<stdio.h>
int main()
{
    int p,r,t,si;

    printf("Enter the p,r,t: ");
    scanf("%d%d%d",&p,&r,&t);

    si = (p*r*t)/100;

    printf("The SI = %d",si);

    return 0;
}