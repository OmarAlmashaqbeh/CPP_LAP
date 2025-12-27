#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a num:";
    cin>>num;
    if(num%5==0 && num%6==0)
    cout<<"Divisible by 5 and 6"<<endl;
    else if(num%5==0 || num%6==0)
    cout<<"Divisible by 5 or 6"<<endl;
    else
    cout<<"Not divisible by 5 or 6"<<endl;
    return 0;
}