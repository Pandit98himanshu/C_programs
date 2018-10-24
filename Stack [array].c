#include <stdio.h>
#include <stdlib.h>

void push_arr(int *arr, int *item, int *top, int size)
{
    if (*top >= size) {
        printf("Sorry! Stack is full.\n");
        //exit(0);  // You "can" add this line. If u wish :)
    } else {
        *top = *top + 1;
        arr[*top] = *item;
    }
}

void pop_arr(int *arr, int *item, int *top, int size)
{
    if (*top < 1) {
        printf("Sorry! Stack is empty.\n");
        //exit(0);
    } else {
        *item = arr[*top];
        printf("The popped element is: %d",*item);
        *top = *top - 1;
    }
}

void status_arr(int *arr, int *item, int *top, int size)
{
    int i;
    if (*top < 1) {
        printf("Stack is empty.\n");
    }
    else if (*top >= size) {
        printf("Stack is full.\n");
    }
    else {
        printf("The elements in stack is: ");
        for(i = *top; i > 0; i--)
            printf("\t%d",arr[i]);
    }
}

int main()
{
    int item, arr[5], size = 5, top = 0, x = 1;
    while (x != 0)
    {
        printf("\n\t1. Push.\n\t2. Pop.\n\t3. Show status.\n\tPress 0 for exit.\n");
        scanf("%d", &x);
        switch (x) {
            case 1:
                printf("Enter element to push into stack : ");
                scanf("%d\n", &item);
                push_arr(arr, &item, &top, size);
                break;
            case 2:
                pop_arr(arr, &item, &top, size);
                break;
            case 3:
                status_arr(arr, &item, &top, size);
                break;
            case 0:
                printf("You are exit.\n");
                break;
            default:
                printf("Invalid input.\n");
                break;
        }
    }
    return 0;
}
