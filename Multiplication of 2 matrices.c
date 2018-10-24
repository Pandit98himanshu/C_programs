# include <stdio.h>
int main()
{
    int i,j,k,x,m[3][3]={
        0,0,0,
        0,0,0,
        0,0,0
    };
    int a[3][3]={
        1,2,3,
        4,5,6,
        7,8,9
    };
    int b[3][3]={
        1,2,3,
        4,5,6,
        7,8,9
    };
    for (i=0; i<=2; i++) {
        for (k=0; k<=2; k++) {
            for (j=0; j<=2; j++) {
                x=a[i][j]*b[j][k];
                m[i][k]=m[i][k]+x;
            }
        }
    }
    for (i=0; i<=2; i++) {
        for (j=0; j<=2; j++) {
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
    return 0;
}
