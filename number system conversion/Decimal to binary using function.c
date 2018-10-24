#include <stdio.h>
#include <stdlib.h>
#include <math.h>
unsigned int binconv(int a);
int main()
{
    char ch;
    int a;
    do{
        printf("Enter any number to convert to convert from decimal to binary : ");
        scanf("%d",&a);
        printf("Binary conversion is here : %u\n",binconv(a));
        printf("\nPress 'Y' for reuse converter or press any other key to exit.\n");
        fflush(stdin);
        scanf("%c",&ch);
    }while(ch=='Y'||ch=='y');
    return 0;
}
unsigned int binconv(int a)
{
        unsigned int i,r,b=0;
        for(i=0;a>0;i++)
        {
            r=a%2;
            a=a/2;
            b=b+r*pow(10,i);
        }
        return (b);
}
