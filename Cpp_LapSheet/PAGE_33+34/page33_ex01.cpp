#include<iostream>
using namespace std;
int main()
{
    int max=0, pass=0, mark[5];
    char result[5];
    double sum=0;
    cout<<"Entre the marks"<<endl;
    for (int i=0; i<5; i++)
    {
        cin>>mark[i];
        if(mark[i]>=50)
        {
            result[i] = 'P';
            pass++;
        }
        else
            result[i] = 'F';
        cout<<result[i]<<endl;
        if(mark[i]>max)
            max=mark[i];
        sum+=mark[i];
    }
    cout<<"Average= "<<sum/5<<endl;
    cout<<"Number of passed students= "<<pass<<endl;
    cout<<"maximum mark is "<<max<<endl;
    return 0;
}