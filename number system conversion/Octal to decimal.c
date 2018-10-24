#include <stdio.h>
#include <math.h>

int main()
{
    int b,r,a,i;
    printf("\nEnter the number to convert from octal to decimal number : ");
    scanf("%d",&a);
        for (i=0,b=0; a>0; i++) {
            r=a%10;
            a=a/10;
            b=pow(8,i)*r+b;
        }
    printf("\nDecimal conversion is here : %d\n",b);
    return 0;
}
