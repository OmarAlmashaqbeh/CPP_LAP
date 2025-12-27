#include<iostream>
using namespace std;
int main()
{
    int mark;
    cout<<"Enter the mark:";
    cin>>mark;
    if(mark>=50)
    cout<<"PASS"<<endl;
    else
    cout<<"FAIL! You must take the course again"<<endl;
    return 0;
}