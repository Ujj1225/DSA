#include <stdio.h>
#define MAX 4
int stack_arr[MAX];
int top = -1;
void push(int data)
{
    top += 1;
    if (top == MAX)
    {
        printf("Stack Overflow!");
        return;
    }
    stack_arr[top] = data;
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    return 0;
}
