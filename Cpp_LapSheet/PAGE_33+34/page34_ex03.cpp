#include<iostream>
using namespace std;
void fillSales(double sales[], int size)
{
    for (int i=0; i<size; i++)
    {
        cout<<"Enter the sale "<<i+1<<endl;
        cin>>sales[i];
    }
}
double getMinimum (double sales[] , int size)
{
    double min=sales[0];
    for (int i=0; i<size; i++)
    {
        if (min>sales[i])
            min=sales[i];
    }
    return min;
}
int getProductIndex (char products[], int size,char product)
{
    for(int i=0; i<size; i++)
    {
        if(products[i]==product)
            return i;
    }
    return -1;
}
int main()
{
    char ch;
    const int size =10;
    double sales[size];
    char products[]={'a','b','c','d','e','f','g','h','i','j'};
    fillSales(sales, size);
    cout<<"The minimum sale is "<<getMinimum(sales, size)<<endl;
    cout<<"Enter a product letter: ";
    cin>>ch;
    int Product = getProductIndex(products, size, ch);
    if (Product==-1)
        cout<<"Product not found"<<endl;
    else
        cout<<"Product found at index "<<Product<<endl;
    return 0;
}