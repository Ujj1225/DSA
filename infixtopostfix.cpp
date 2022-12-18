#include<iostream>
#include<stack>
using namespace std;
int top =-1;
// Function which returns the precedence by scanning the symbols
int prec(char c)
{
    if (c=='^')
        return 3;
    else if (c == '*' || '/')
        return 2;
    else if (c == '+' || '-')
        return 1;
    else
        return -1;
}

string infixtopostfix(string s){
    stack<char> st;
    string res;
    for(int i =0; i< s.length; i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>= 'A' && s[i]<= 'Z'))
        {
            res += s[i];
        }
        else if (s[i] == '(')
        {
            st.push(s[i]);
        }
        else if (s[i] == ')')
        {
            while(!st.empty )
        }
    }




}
int main()
{

    printf("Enter the infix expression: ");
    // Now to get expression from user and input it to infix array
    std::cin >> infix;
    inToPost();
    return 0;
}