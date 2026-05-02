#include<iostream>
using namespace std;
int main()
{
    int minutes, hours;
    cout<<"Enter the time in minutes"<<endl;
    cin>>minutes;
    hours=minutes/60;
    minutes-=hours*60;
    cout<<hours<<":"<<minutes<<endl;
    return 0;
}