#include<iostream>
using namespace std;
int main()
{
    int angle;
    cout<<"Enter the angle measure"<<endl;
    cin>>angle;
    if(angle<90 && angle>=0)
    cout<<"Acute Angle"<<endl;
    else if(angle==90)
    cout<<"Right Angle"<<endl;
    else if(angle>90 && angle<180)
    cout<<"Obtuse Angle "<<endl;
    else
    cout<<"Straight Angle"<<endl;
    return 0;
}