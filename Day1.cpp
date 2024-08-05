//Basic Calculator using C++
#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"Please enter two numbers: "<<endl;
    cin>>a;
    cin>>b;
    int op;
    cout<<"Enter which operation do you want to perform"<<endl;
    cout<<"For Addition press 1\nFor Subtraction press 2\nFor Multiplication press 3\nFor Division press 4\nFor Modulus press 5"<<endl;
    cin>>op;
    switch(op){
        case 1:
            cout<<"Addition of "<<a<<" and "<<b<<" is : "<<a+b<<endl;
            break;
        case 2:
            cout<<"Subtraction of "<<a<<" and "<<b<<" is : "<<a-b<<endl;
            break;
        case 3:
            cout<<"Multiplication of "<<a<<" and "<<b<<" is : "<<a*b<<endl;
            break;
        case 4:
            cout<<"Division of "<<a<<" and "<<b<<" is : "<<a/b<<endl;
            break;
        case 5:
            cout<<"Modulus of "<<a<<" and "<<b<<" is : "<<a%b<<endl;
            break;
        default:
            cout<<"Invalid input"<<endl;
            break;
    }
    return 0;
}
