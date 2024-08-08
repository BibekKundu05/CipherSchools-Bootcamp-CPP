#include<iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout<<"Enter three numbers: "<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b && a>c)
    {
        cout<<a<<" is greatest among all."<<endl;
    }
    else if(b>a && b>c)
    {
        cout<<b<<" is greatest among all."<<endl;
    }
    else
    {
        cout<<c<<" is greatest among all."<<endl;
    }

}
