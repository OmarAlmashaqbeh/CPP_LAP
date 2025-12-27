#include<iostream>
using namespace std;
int main()
{
    for (int line=1; line <= 5; line++)
    {
        for (int space=4; space >= line; space--)
        {
            cout<<" ";
        }
        for (int star=1; star <= line; star++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}