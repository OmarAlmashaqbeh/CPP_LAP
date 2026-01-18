#include<iostream>
using namespace std;
int main()
{
    int num1, num2;
    bool isprime=true, found=false;
    cout<<"Enter two numbers"<<endl;
    cin>>num1>>num2;
    if(num1 > num2)
    {
        num1 += num2;
        num2 = num1 - num2;
        num1 -= num2;
    }
    cout<<"The prime numbers between "<<num1<<" and "<<num2<<" are: ";
    for(int i=num1; i <= num2; i++)
    {
        if (i < 2)
        {
            continue;
        }
        isprime=true;
        for(int j=2; j*j <= i; j++)
        {
            if(i%j == 0)
            {
                isprime=false;
                break;
            }
        }
        if(isprime)
        {
        cout<<i<<" ";
            found=true;
        }
    }
    if (!found)
    cout<<"There is not any prime numbers."<<endl;
    return 0;
}