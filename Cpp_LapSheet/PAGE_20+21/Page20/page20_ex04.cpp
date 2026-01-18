#include<iostream>
using namespace std;
int main()
{
    int num=0, mark=0;
    double average, sum=0;
    cout<<"Enter the marks"<<endl;
    cin>>mark;
    while (mark !=-1)
    {
        if(mark>=0 && mark<=100)
            {
            sum += mark;
            num++;
            cout<<"Enter a mark OR enter -1 to finish"<<endl;
            }
        else
            cout<<"Error, Try again"<<endl;
        cin>>mark;
    }
    if(num != 0)
    {
        average = sum/num;
        cout<<"Average = "<<average<<endl;
    }
    else
        cout<<"No valid marks were entered."<<endl;
    return 0;
}