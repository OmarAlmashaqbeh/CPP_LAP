#include<iostream>
using namespace std;
int main()
{
    int num , d1 , d2 , d3 , sum;
    cout<<"enter a 3-digit number"<<endl;
    cin>>num;
    d1 = num%10;
    d2 = (num/10)%10;
    d3 = num/100;
    sum = d1 + d2 + d3;
    cout<<"sum = "<<sum<<endl;
    return 0;
}