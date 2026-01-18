#include<iostream>
using namespace std;
int main()
{
    double Fahrenheit , Celsius;
    cout<<"Enter a value in Fahrenheit to convert it to Celsius"<<endl;
    cin>>Fahrenheit;
    Celsius = ((5.0/9.0)*(Fahrenheit - 32));
    cout<<"Fahrenheit to Celsius = "<<Celsius;
    return 0;
}