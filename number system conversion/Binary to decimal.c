#include <stdio.h>
#include <math.h>

int main(){
    int b,R,r,j,B;
    printf("Enter the positive binary number in order to convert it into decimal number : ");
    scanf("%d",&R);
    for (j=0,b=0,B=0; R>0; j++) {
        r=R%10;
        R=R/10;
        b=pow(2,j)*r;
        B=b+B;
    }
    printf("Your conversion is here : %d\n",B);
    return 0;
}
