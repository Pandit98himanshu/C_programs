#include <stdio.h>
#include <math.h>

int main() {
    int a,b,i,j,r,R,B;
    printf("\nEnter the positive octal number to convert into binary : ");
    scanf("%d",&a);
    for (j=0,B=0; a>0; j++) {
        R=a%10;
        a=a/10;
        for (i=0,b=0; R>0; i++) {
            r=R%2;
            R=R/2;
            b=b+r*pow(10, i);
        }
        B=b*pow(1000,j)+B;
    }
    printf("\nBinary conversion is here : %d\n",B);
    return 0;
}
