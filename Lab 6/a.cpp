#include <iostream>
class MinStack
{
    int min=10000;
    int prevmin=10000;
    int top=-1;
    int A[10000]={0};
    MinStack(int x)
    {
        top=x;
    }
    void push(int x)
    {
        A[++top]=x;
        if(x<min)min=x;
        if(x>min&&x<prevmin)prevmin=x;
    }
    void pop()
    {
        if(A[top]==min)min=prevmin;
        A[top--]=0;
    }
    int top()
    {
        return A[top];
    }
    int getMin()
    {
        return min;
    }
};
int main()
{}