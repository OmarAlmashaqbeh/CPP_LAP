#include<iostream>
using namespace std;
int main()
{
    double b_salary, net_salary;
    cout<<"Enter basic salary:";
    cin>>b_salary;
    if(b_salary>1000)
    cout<<"Net salary ="<<b_salary - 0.16*b_salary<<endl;
    else if(500<= b_salary && b_salary<1000)
    cout<<"Net salary ="<<b_salary - 0.1*b_salary<<endl;
    else
    cout<<"Net salary ="<<b_salary - 0.08*b_salary<<endl;
    return 0;
}