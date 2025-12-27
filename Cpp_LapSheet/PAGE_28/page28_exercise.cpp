#include<iostream>
#include<cmath>
using namespace std;
double getVol(int height,double radius)
{
    double volume;
    volume= (22.0/7)*pow(radius,2.0)*height;
    return volume;
}
double getVol(double radius,int height)
{
    double volume;
    volume= (22.0/7)*pow(radius,2.0)*height;
    return volume;
}
int main()
{
    int height;
    double radius;
    cout<<"Enter radius and height of a cylinder:";
    cin>>radius>>height;
    cout<<"Volume of cylinder is(1) "<<getVol(height,radius)<<endl;
    cout<<"Volume of cylinder is(2) "<<getVol(radius,height)<<endl;
    return 0;
}
