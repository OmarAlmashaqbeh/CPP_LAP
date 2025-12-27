#include<iostream>
using namespace std;
int get_max(int a , int b)
{
    if (a>b)
    {
        return a;
    }
    return b;
}
int get_min(int a , int b)
{
    if (a<b)
    {
        return a;
    }
    return b;
}
int main()
{
    int x, y, z;
    cout<<"Enter three numbers"<<endl;
    cin>>x>>y>>z;
    cout<<"The maximum number = "<<get_max(get_max(x,y), z)<<endl;
    cout<<"The minimum number = "<<get_min(get_min(x,y), z)<<endl;
    return 0;
}