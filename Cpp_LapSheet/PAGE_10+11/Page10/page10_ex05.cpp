#include<iostream>
using namespace std;
int main()
{
    int num1,num2 ,num3;
    //maximum
    cout<<"Enter three integers"<<endl;
    cin>>num1>>num2>>num3;
    if(num1>num2 && num1>num3)
    cout<<"The maximum is num1="<<num1<<endl;
    else if(num2>num1 && num2>num3)
    cout<<"The maximum is num2="<<num2<<endl;
    else
    cout<<"The maximum is num3="<<num3<<endl;
    //minimum
    if(num1<num2 && num1<num3)
    cout<<"The minimum is num1="<<num1<<endl;
    else if(num2<num1 && num2<num3)
    cout<<"The minimum is num2="<<num2<<endl;
    else
    cout<<"The minimum is num3="<<num3<<endl;
    return 0;
}