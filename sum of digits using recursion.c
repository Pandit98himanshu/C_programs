#include <stdio.h>
int rec(int i);
int main(){
    int i=12346;
    printf("sum = %d\n",rec(i));
    return 0;
}
int rec(int i){
    int n;
    if(i==0){
        return 0;
    }
    n=i%10;
    return n+rec(i/10);
}
