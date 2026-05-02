#include<iostream>
using namespace std;
int main()
{
    for (int line=5; line >= 1; line--)
    {
        for (int number=1; number <= line; number++)
        {
            cout<<number;
        }
        cout<<endl;
    }
    return 0;
}