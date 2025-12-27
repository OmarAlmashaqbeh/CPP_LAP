#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<"|--------------|-----------------|"<<endl;
    cout<<"|  The number  |  The factorial  |"<<endl;
    cout<<"|--------------|-----------------|"<<endl;
    for (long long i=1; i <= 5; i++)
    {
        long long factorial=1;
        for (int j=i; j > 1; j--)
        {
            factorial *= j;
        }
        cout<<"|"<<setw(14)<<i<<"|"<<setw(17)<<factorial<<"|"<<endl;
        cout<<"|--------------|-----------------|"<<endl;
    }
    return 0;
}