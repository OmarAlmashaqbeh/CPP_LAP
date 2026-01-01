#include<iostream>
using namespace std;
void fillSalaries(double salaries[], int size)
{
    for (int i=0; i<size; i++)
    {
        cout<<"Enter salary "<<i+1<<endl;
        cin>>salaries[i];
    }
}
double getMaximum(double salaries[], int size)
{
    double max=salaries[0];
    for (int i=1; i<size; i++)
    {
        if (max<salaries[i])
            max=salaries[i];
    }
    return max;
}
double getAverage(double salaries[], int size)
{
    double average, sum=0;
    for (int i=0; i<size; i++)
    {
        sum+=salaries[i];
    }
    average=sum/size;
    return average;
}
char getGender(double salaries [] ,char gender[], int size)
{
    for (int i=0; i<size; i++)
    {
        if (salaries[i]>500)
            return gender[i];
    }
    return 'N';
}
char getGenderForMin(double salaries[],char gender[], int size)
{
    double min=salaries[0];
    int minimum=0;
    for (int i=1; i<size; i++)
    {
        if (min>salaries[i])
        {
            min=salaries[i];
            minimum=i;
        }
    }
    return gender[minimum];
}
int main()
{
    const int size =10;
    char gender[size];
    double salaries[size];
    for (int i=0; i<size; i++)
    {
        cout<<"Enter 'M' if the gender is male OR 'F' if the gender is female"<<endl;
        cin>>gender[i];
    }
    fillSalaries(salaries, size);
    cout<<"Average of salaries= "<<getAverage(salaries, size)<<endl;
    cout<<"The gender of the first salary greater is "<<getGender(salaries, gender, size)<<endl;
    cout<<"The gender for the minimum salary is "<<getGenderForMin(salaries, gender, size);
    return 0;
}