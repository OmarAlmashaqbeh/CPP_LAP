#include<iostream>
using namespace std;
int main()
{
    for (int line=1; line <= 5; line++)
    {
        for (int number=1; number <= line; number++)
        {
            if (line%2 == 0)
            {
                cout<<"0";
            }
            else
            {
                cout<<"1";
            }
            
        }
        cout<<endl;
    }
    return 0;
}