#include <stdio.h>
#include <math.h>

int main()
{
    int b,r,a,i;
    printf("\nEnter the number to convert from hexadecimal to decimal number : ");
    scanf("%x",&a);
        /*for (i=0,b=0; a>0; i++) {
            r=a%10;
            a=a/10;
            b=(r*pow(16,i))+b;
        }*/
    printf("\nDecimal conversion is here : %d\n",a);
    return 0;
}
