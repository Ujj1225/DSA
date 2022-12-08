#include <stdio.h>
#include <cstdlib>
#define MAX 4
int stack_arr[MAX];
int top = -1;
void push(int);
int pop()
{
    int value;
    if (top == -1)
    {
        printf("Stack is Empty!\n");
        exit(1);
    }
    value = stack_arr[top];
    top -= 1;
    return value;
}
void print()
{
    int i;
    if (top == -1)
    {
        printf("Stack Underflow\n");
        return;
    }
    for (i = top; i >= 0; i--)
    {
        printf("%d", stack_arr[i]); // This now prints last element first HENCE: LIFO
        printf("\n");
    }
}
int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    int data = pop();
    pop();
    print();
    return 0;
}
void push(int a)
{
    top++;
    if (top == MAX)
    {
        printf("Stack Overflow!!!\n");
        return;
    }
    stack_arr[top] = a;
}