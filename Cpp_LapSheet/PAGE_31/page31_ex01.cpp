#include<iostream>
using namespace std;
double convertFtToM(double feet)
{
    double meter;
    meter = 0.3048*feet;
    return meter;
}
double convertMToFt(double meter)
{
    double feet;
    feet = 3.280839895*meter;
    return feet;
}
int main()
{
    double meter, feet;
    cout<<"Enter a value in feet: ";
    cin>>feet;
    cout<<feet<<" to meter = "<<convertFtToM(feet)<<endl;
    cout<<"Enter a value in meter: ";
    cin>>meter;
    cout<<meter<<" to feet = "<<convertMToFt(meter)<<endl;
    return 0;
}
