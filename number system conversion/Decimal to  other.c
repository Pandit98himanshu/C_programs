#include <stdio.h>
#include <math.h>

int main(){
    int x;
    char ch='Y';
    unsigned int b,i,a,r;
    char c='H';
        do{
        printf("\n-> Press '1' to convert from decimal to binary number,\n-> Press '2' to convert from decimal to octal number,\n-> Press '3' to convert from decimal to hexadecimal number.\n");
            scanf("%d",&x);ch='y';
            switch(x){
                case 1:
                    for(;ch=='y'||ch=='Y';scanf("%c",&ch)){
                        printf("\nEnter any positive number to convert from decimal to binary number : ");
                        scanf("%u",&a);
                        for(i=0,b=0;a>0;i++){
                            r=a%2;
                            a=a/2;
                            b=b+r*pow(10,i);
                        }
                        printf("\nBinary conversion is here : %u",b);
                        printf("\nPress 'Y' for reuse decimal to binary number converter or, press 'N' to exit.");
                        scanf("%c",&ch);
                    }
                    
                case 2:
                    for(;ch=='y'||ch=='Y';scanf("%c",&ch)){
                        printf("\nEnter any positive number to convert from decimal to octal number : ");
                        scanf("%u",&a);
                        printf("\nOctal conversion is here : %o",a);
                        printf("\nPress 'Y' for reuse decimal to octal number converter or, press 'N' to exit.");
                        scanf("%c",&ch);
                    }
                    
                case 3:
                    for(;ch=='y'||ch=='Y';scanf("%c",&ch)){
                        printf("\nEnter any positive number to convert from decimal to hexadecimal number : ");
                        scanf("%u",&a);
                        printf("\nOctal conversion is here : %x",a);
                        printf("\nPress 'Y' for reuse decimal to hexadecimal number converter or, press 'N' to exit.");
                        scanf("%c",&ch);
                    }
            }
            printf("\nPress 'H' for reuse converter or, press 'N' to exit.\n");
        getchar();
            scanf("%c",&c);
        }while(c=='H'||c=='h');
    return 0;
}
