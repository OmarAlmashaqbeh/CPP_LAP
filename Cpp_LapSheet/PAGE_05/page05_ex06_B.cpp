#include<iostream>
using namespace std;
int main()
{
    int x=10, y=5;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    x+=y;
    y=x-y;
    x-=y;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    return 0;
}