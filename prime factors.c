#include <stdio.h>
#include <math.h>

int main() {
    int i,n;
    printf("Enter the number to find out its prime factors : ");
    scanf("%d",&n);
    while (n%2==0)
    {
        printf ("%d*", 2);
        n=n/2;
    }
    for (i=3; i<=sqrt(n); i=i+2) {
        while (n%i==0)
        {
            printf ("%d*", i);
            n=n/i;
        }
    }
    if (n>2) {
        printf("%d\n",n);
    }
    
    return 0;
}
