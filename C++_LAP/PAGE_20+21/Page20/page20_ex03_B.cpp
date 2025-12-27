#include<iostream>
using namespace std;
int main()
{
    int sum = 0, i=1;
    while(i <= 100)
    {
        if (i%2 != 0)
        {
            sum += i;
        }
        i++;
    }
    cout<<"Sum of odd numbers between 1 and 100 is: "<<sum<<endl;
    return 0;
}