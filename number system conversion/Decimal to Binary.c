/* A simple program which converts decimal into binary.*/
/*
// This program only works on windows because here we use "fflush(stdin)".
#include <stdio.h>
#include <math.h>

int main()
{
    unsigned int b,i,a,r;
    char ch;
    do{
        printf("\nEnter any number to convert to convert from decimal to binary number : ");
        scanf("%u",&a);
        for(i=0,b=0;a>0;i++){
            r=a%2;
            a=a/2;
            b=b+r*pow(10,i);
        }
        printf("\nBinary conversion is here : %u\n",b);
        printf("Press 'Y' for reuse converter or press any other key to exit.");
        fflush(stdin);      //doesn't work on mac os x.
        scanf("%c",&ch);
    }
    while(ch=='Y'||ch=='y');
    return 0;
}

*/
//---------------------------------------------------------------------------------------//


// Another same program which works on mac os x.
#include <stdio.h>
#include <math.h>

int main()
{
    unsigned int b,i,a,r;
    char ch='Y';
    for(;ch=='y'||ch=='Y';scanf("%c",&ch)){
        printf("\nEnter any number to convert from decimal to binary number : ");
        scanf("%u",&a);
        for(i=0,b=0;a>0;i++){
            r=a%2;
            a=a/2;
            b=b+r*pow(10,i);
        }
        printf("\nBinary conversion is here : %u\n",b);
        printf("\nPress 'Y' for reuse converter or press any other key to exit.");
        /* scanf("%c",&ch); */
        getchar();     //we can also use again [scanf("%c",&ch);] instead of [getchar();]
    }                  //The problem occurs due to "\o{ending of program}", which is automatically               taken by compiler and provide it to next [scanf("%c",&ch);] and it can be rectify by either using again [scanf("%c",&ch);] or [getchar();].
    return 0;
}
