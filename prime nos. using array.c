# include <stdio.h>

int main()
{
    int num[101],i,n;
    for (i=2; i<101; i++) {
        num[i]=i;
    }
    for (i=2; i<=101; i++) {
        for (n=i; n<101; n++) {
            if (num[n]%i==0 && num[n]!=i){
                num[n]=0;
            }
        }
    }
    for (i=1; i<101; i++) {
        if (num[i]!=0) {
            printf("%d\t",num[i]);
        }
    }
    return 0;
}
