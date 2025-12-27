#include<iostream>
using namespace std;
int main()
{
    int x=10, y=5, z;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    z=y;
    y=x;
    x=z;
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    return 0;
}