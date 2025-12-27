#include<iostream>
using namespace std;
int main()
{
    while(true)
    {
        cout<<"Press 1 for Addition"<<endl;
        cout<<"Press 2 for Subtraction"<<endl;
        cout<<"Press 3 for Multiplication"<<endl;
        cout<<"Press 4 for Division"<<endl;
        cout<<"Press 5 to exit"<<endl;
        int a, x, y;
        cin>>a;
        if (a==1)
        {
            cout<<"Enter two integers"<<endl;
            cin>>x>>y;
            cout<<x<<"+"<<y<<"= "<<x+y<<endl;
        }
        else if (a==2)
        {
            cout<<"Enter two integers"<<endl;
            cin>>x>>y;
            cout<<x<<"-"<<y<<"= "<<x-y<<endl;
        }
        else if (a==3)
        {
            
            cout<<"Enter two integers"<<endl;
            cin>>x>>y;
            cout<<x<<"*"<<y<<"= "<<x*y<<endl;
        }
        else if (a==4)
        {
            cout<<"Enter two integers"<<endl;
            cin>>x>>y;
            if(y!=0)
            cout<<x<<"/"<<y<<"= "<<x/y<<endl;
            else
            cout<<"Error, division by zero is not allowed"<<endl;
        }
        else if (a==5)
            break;
        else
            cout<<"Invalid choice!!! Please make a valid choice"<<endl;
    }
    return 0;
}
