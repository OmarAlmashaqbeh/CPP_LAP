#include<iostream>
using namespace std;
bool isDivisibleBy10(int num)
{
    if(num%10 == 0)
        return true;
    return false;
}
int getFactorial(int num)
{
    int factorial=1;
    for (int i=2; i <= num; i++)
    {
        factorial*=i;
    }
    return factorial;
}
int main()
{
    int num1, num2;
    cout<<"Enter a number to check if it is divisible by 10"<<endl;
    cin>>num1;
    if (isDivisibleBy10(num1))
        cout<<num1<<" is divisible by 10"<<endl;
    else
        cout<<num1<<" is not divisible by 10"<<endl;
    cout<<"Enter a number to calculate the factorial"<<endl;
    cin>>num2;
    while (num2<0)
    {
        cout<<"Error, enter a number greater or equal to zero."<<endl;
        cin>>num2;
    }
        cout<<"The factorial of "<<num2<<" = "<<getFactorial(num2)<<endl;
    return 0;
}
