#include<iostream>
#define MAX 4
using namespace std;
int top = -1;
int stack_arr[MAX];


// Making a function to see if the stack is full
bool isfull()
{
    if (top == MAX-1)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
// Function to push an element onto the stack
void push(int data)
{
    if(isfull())
    {
        printf("Stack Overflow!!!\n");
        return;
    }
    top += 1;
    stack_arr[top] = data;
}
// Making a function to see if the stack is empty
bool isempty()
{
    if(top==-1)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
// Creating a function to pop elements 
int pop()
{
    if (isempty())
    {
        printf("Stack is empty");
        exit(-1);
    }
    int value;
    value = stack_arr[top];
    top -= 1;
    return value;
}
// Creating a function to print elements
void print_arr()
{
    int n;
    n = sizeof(stack_arr)/sizeof(stack_arr[0]);
    for (int i=0; i < n; i++)
    {
        printf("%d\t",stack_arr[i]);
    }
}
int main()
{
    push(1);
    push(2);
    push(3);
    int num = pop();
    printf("The popped element is %d\n", num);
    push(4);
    push(5);
    push(6);
    print_arr();
    return 0;
}
