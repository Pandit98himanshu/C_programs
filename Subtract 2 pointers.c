#include <stdio.h>
// A simple program which describes the subtraction of 2 pointers.
int main()
{
    int arr[]={10,20,30,45,67,56,74};
    int *i,*j;        // Replace 'int'(size 4 byte) with 'char'(size 1 byte) then, 'double'(size 4 byte) and see the difference of two pointer (j-i).
    i=&arr[1];        // Address(a) = base address(address of 0th element of array) + index * size of variable.
    j=&arr[5];        // subtraction of 2 addresses = [address(a2) - address(a1)] / size of pointer data type.
    printf("%u,%u,%ld,%d\n",i,j,j-i,*j-*i);
    return 0;
}
