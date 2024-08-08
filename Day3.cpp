#include<iostream>
using namespace std;
int main() {
    int num1, num2, num3;
    int *p1, *p2, *p3;
    p1 = &num1;
    p2 = &num2;
    p3 = &num3;
    cout<<"Enter a value for first integer: ";
    cin>>*p1;
    cout<<"Enter a value for second integer: ";
    cin>>*p2;
    cout<<"Enter a value for third integer: ";
    cin>>*p3;
    int sum = *p1 + *p2 + *p3;
    cout<<"Value of first integer: "<<num1<<endl;
    cout<<"Value of second integer: "<<num2<<endl;
    cout<<"Value of third integer: "<<num3<<endl;
    cout<<"Sum of the three integers is: "<<sum<<endl;
    
    return 0;
}
