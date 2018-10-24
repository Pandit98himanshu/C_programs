# include <stdio.h>
int main()
{
    int i,j,k,arr[3][4][2]={
        {
            {2,4},
            {7,8},
            {3,4},
            {5,6}
        },
        {
            {7,6},
            {3,4},
            {5,3},
            {2,3}
        },
        {
            {8,9},
            {7,2},
            {3,4},
            {5,1},
        }
    };
    for (i=0; i<=2; i++) {
        printf("\n");
        for (j=0; j<=3; j++) {
            printf("\n");
            for (k=0; k<=1; k++) {
                printf("%d\t",*(*(*(arr+i)+j)+k));
            }
        }
    }
    return 0;
}
