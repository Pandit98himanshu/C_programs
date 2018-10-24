# include <stdio.h>
int main()
{
    int i,j,five[5][5]={
        2,4,3,6,9,
        6,8,0,1,6,
        9,0,3,6,2,
        3,8,3,2,7,
        2,7,5,9,3
    };
    for (i=0; i<=4; i++) {
        printf("\n");
        for (j=0; j<=4; j++) {
            printf("%d\t",*(*(five+i)+j));
        }
    }
    return 0;
}
