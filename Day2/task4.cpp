#include<iostream>
#include<cmath>
using namespace std;
double sqrtCalculate(double a)
{
    double cal = sqrt(a);
    return cal;
}
double squareCalculate(double a)
{
    return a*a;
}
int main()
{
    double x;
    cout<<"Enter a number: "<<endl;
    cin>>x;
    double sqrtCal = sqrtCalculate(x);
    double squareCal = squareCalculate(x);
    cout<<"The Square Root of "<<x<<" is: "<<sqrtCal<<endl;
    cout<<"The Square of "<<x<<" is: "<<squareCal<<endl;
}
