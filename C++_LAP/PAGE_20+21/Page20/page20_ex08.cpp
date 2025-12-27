#include<iostream>
using namespace std;
bool prime=true, found=false;
void printPrimes(int NUM1, int NUM2)
{
    for(int i=NUM1; i <= NUM2; i++)
    {
        if (i < 2)
        {
            continue;
        }
        prime=true;
        for(int j=2; j*j <= i; j++)
        {
            if(i%j == 0)
            {
                prime=false;
                break;
            }
        }
        if(prime)
        {
        cout<<i<<" ";
            found=true;
        }
    }
}
int main()
{
    int num1, num2;
    cout<<"Enter two numbers"<<endl;
    cin>>num1>>num2;
    if(num1 > num2)
    {
        num1 += num2;
        num2 = num1 - num2;
        num1 -= num2;
    }
    cout<<"The prime numbers between "<<num1<<" and "<<num2<<" is: ";
    printPrimes(num1, num2);
    if (!found)
    cout<<"There is not any prime numbers."<<endl;
    return 0;
}