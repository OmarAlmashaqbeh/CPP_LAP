#include<iostream>
using namespace std;
double sum=0;
int num=0;
double calculateAverage(double sum, int num)
{
    double average;
    average = sum/num;
    return average;
}
char getGrade(double mark)
{
    switch ((int)mark/10)
    {
    case 10:
    case 9:
        return 'A';
        break;
    case 8:
        return 'B';
        break;
    case 7:
        return 'C';
        break;
    case 6:
        return 'D';
        break;
    case 5:
        return 'E';
        break;
    default:
        return 'F';
        break;
    }
}   
char getResult(double result)
{
    if (result>=50)
        return 'P';
    return 'F';
}
void printResult(double Result)
{
    if (Result>=50)
        cout<<"Congratulations!!! You Passed!!!"<<endl;
    else
        cout<<"Sorry!!! You Failed!!!"<<endl;
}
int main()
{
    int mark;
    double average;
    cout<<"Enter the first mark"<<endl;
    cin>>mark;
    while(mark != -1)
    {
        cout<<getGrade(mark)<<endl;
        num++;
        sum+=mark;
        cout<<"Enter a mark or enter -1 to exit"<<endl;
        cin>>mark;
    }
    average = calculateAverage(sum, num);
    cout<<"Average= "<<average<<endl;
    cout<<getResult(average)<<endl;
    printResult(average);
    return 0;
}