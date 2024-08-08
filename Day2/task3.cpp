#include<iostream>
using namespace std;
int calculateSum(int a, int b, int c)
{
    int sum = a + b + c;
    return sum;
}
int main()
{
    int x, y, z;
    cout<<"Enter three numbers"<<endl;
    cin>>x;
    cin>>y;
    cin>>z;
    int sum = calculateSum(x, y, z);
    cout<<"The sum of "<<x<<", "<<y<<",and "<<z<<" is: "<<sum<<endl;
}