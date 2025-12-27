#include<iostream>
using namespace std;
int main()
{
    int mark;
    cout<<"Enter the mark:";
    cin>>mark;
    if(mark >= 90 && mark <= 100)
    cout<<"PASS, grade is A"<<endl;

    else if(mark >= 80 && mark < 90)
    cout<<"PASS, grade is B"<<endl;

    else if(mark >= 70 && mark < 80)
    cout<<"PASS, grade is C"<<endl;

    else if(mark >= 60 && mark < 70)
    cout<<"PASS, grade is D"<<endl;

    else if(mark >= 50 && mark < 60)
    cout<<"PASS, grade is E"<<endl;

    else
    cout<<"FAIL! You must take the course again"<<endl;
    return 0;
}