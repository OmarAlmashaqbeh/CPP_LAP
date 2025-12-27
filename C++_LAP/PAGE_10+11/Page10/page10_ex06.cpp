#include<iostream>
using namespace std;
int main()
{
    int a, b;
    char op;
    cout<<"Enter two integers"<<endl;
    cin>>a>>b;
    cout<<"Enter the operation(+ , - , * , /)"<<endl;
    cin>>op;
    switch(op)
    {
    case '+':
        cout<<"a + b ="<<a+b<<endl;
        break;
    case '-':
        cout<<"a - b ="<<a-b<<endl;
        break;
    case '*':
        cout<<"a * b ="<<a*b<<endl;
        break;
    case '/':
        cout<<"a / b ="<<a/b<<endl;
        break;
    default:
        cout<<"Error"<<endl;
        break;
    }
    return 0;
}