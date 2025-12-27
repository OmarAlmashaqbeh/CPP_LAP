#include<iostream>
using namespace std;
int main()
{
    int num, factorial=1;
    cout<<"Enter the number:";
    cin>>num;
    if (num == 0)
    {
        cout<<"The factorial of "<<num<<" = "<<1<<endl;
    }
    else if (num > 0)
    {
        for (int i=num; i > 1; i--)
        {
            factorial *= i;
        }
        cout<<"The factorial of "<<num<<" = "<<factorial<<endl;
    }
    else
        cout<<"Error"<<endl;
    return 0;
}