#include<iostream>
using namespace std;
int main()
{
    int num;
    bool prime=true;
    cout<<"Enter the number:";
    cin>>num;
    if(num <= 1)
    {
        prime = false;
    }
    else
    {
        for(int i=2; i < num; i++)
        {
            if(num % i == 0)
            {
                prime = false;
                break;
            }
        }
    }
    if(prime)
        cout<<num<<" is a prime number."<<endl;
    else
        cout<<num<<" is not a prime number."<<endl;
    return 0;
}