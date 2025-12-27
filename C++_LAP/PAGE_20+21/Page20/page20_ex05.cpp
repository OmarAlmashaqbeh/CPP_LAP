#include<iostream>
using namespace std;
int main()
{
    int mark, num, min=100, max=0, pass=0, fail=0;
    double sum=0, average;
    cout<<"Enter the number of student"<<endl;
    cin>>num;
    while (pass + fail != num)
    {
        cout<<"Enter the mark"<<endl;
        cin>>mark;
        if(mark>=0 && mark<=100)
        {
            if (mark>=50)
            {
                pass++;
                cout<<"Pass"<<endl;
                sum += mark;
                
            }
            else
            {
                fail++;
                sum += mark;
                cout<<"Fail"<<endl;
                
            }
            if (max < mark)
            {
                max = mark;
            }
            if (min > mark)
            {
                min = mark;
            }
        }
        else
        {
            cout<<"Error, Try again"<<endl;
        }
    }
    average = sum/num;
    cout<<"Number of passed students = "<<pass<<endl;
    cout<<"Number of failed students = "<<fail<<endl;
    cout<<"Minimum mark = "<<min<<endl;
    cout<<"Maximum mark = "<<max<<endl;
    cout<<"Average = "<<average<<endl;
    return 0;
}