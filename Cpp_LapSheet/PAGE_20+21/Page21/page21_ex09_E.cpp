#include<iostream>
using namespace std;
int main()
{
    for (int line=5; line >= 1; line--)
    {
        for (int space=5; space > line; space--)
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