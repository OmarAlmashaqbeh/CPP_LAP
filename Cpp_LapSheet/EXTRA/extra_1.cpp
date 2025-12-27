#include<iostream>
using namespace std;
void Check_even_odd(int num)
{
    if (num%2 == 0)
    {
        cout<<"number is even"<<endl;
    }
    else
    {
        cout<<"number is odd"<<endl;
    }
}
int find_sum(int n)
{
    int sum=0;
    for (int i=1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
int main()
{
    int num;
    cout<<"enter number: ";
    cin>>num;
    Check_even_odd(num);
    cout<<"the sum = "<<find_sum(num)<<endl;
    return 0;
}