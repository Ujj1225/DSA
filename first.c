#include<stdio.h>
#define MAX 4
int stack_arr[MAX];
int top = -1;    //This indicates the stack is empty
void push(int data)
{
    top += 1;
    stack_arr[top] = data;
}
int main()
{
    push(1);
    push(3);
    push(5);
    push(7);
    return 0;
}