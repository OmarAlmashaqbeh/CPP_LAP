#include<iostream>
using namespace std;
int main()
{
    int mark;
    cout<<"Enter the mark:";
    cin>>mark;
    switch (mark/10)
    {
    case 10:
    case 9:
        cout<<"PASS, grade is A"<<endl;
        break;
    case 8:
        cout<<"PASS, grade is B"<<endl;
        break;
    case 7:
        cout<<"PASS, grade is C"<<endl;
        break;
    case 6:
        cout<<"PASS, grade is D"<<endl;
        break;
    case 5:
        cout<<"PASS, grade is E"<<endl;
        break;
    default:
        cout<<"FAIL! You must take the course again"<<endl;
        break;
    }
    return 0;
}