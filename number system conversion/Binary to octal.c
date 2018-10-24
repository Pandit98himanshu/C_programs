#include <stdio.h>
#include <math.h>

int main()
{
    int b,r,a,i,j,B,R,d;
        printf("\nEnter the number to convert from binary to octal number : ");
        scanf("%d",&a);
        for(i=0,d=0;a>0;i++){
            R=a%1000;
            a=a/1000;
            for (j=0,b=0,B=0; R>0; j++) {
                r=R%10;
                R=R/10;
                b=pow(2,j)*r;
                B=b+B;
                }
            d=B*pow(10,i)+d;
        }
    printf("\nOctal conversion is here : %d\n",d);
    return 0;
}
