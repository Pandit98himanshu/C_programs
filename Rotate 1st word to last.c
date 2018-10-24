#include <stdio.h>
int main()
{
    char rot[30];
    printf("Enter a word to rotate it : ");
    scanf("%s",rot);
    int i,j,m,n;
    n=strlen(rot);
    for (j=0; j<=n-1; j++) {
        printf("%s",rot);
        m=rot[0];
        for (i=0; i<=n-2; i++) {
            rot[i]=rot[i+1];
        }
        rot[n-1]=m;
        printf("\t");
    }
    printf("\n");
    return 0;
}
/*int main()
{
    char s[]="space";
    int i,j,m;
    for (j=0; j<=4; j++) {
        printf("%s",s);
        m=s[0];
        for (i=0; i<=3; i++) {
            s[i]=s[i+1];
        }
        s[4]=m;
        printf("\n");
    }
    printf("\n");
    return 0;
}*/
