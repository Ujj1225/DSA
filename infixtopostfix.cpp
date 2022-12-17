#include<iostream>
#include<stack>
#include<string>
#define Max 10

char stack[Max];
// This stack arr stores all characters even left and right parenthesis
char infix[Max], postfix[Max];
int top =-1;
void inToPost()
{
    


}
int main()
{

    printf("Enter the infix expression: ");
    // Now to get expression from user and input it to infix array
    std::cin >> infix;
    inToPost();
    return 0;
}