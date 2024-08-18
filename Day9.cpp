//String
/*#include<iostream>
using namespace std;
int main()
{
    // char str[] = "Hello";
    // char str1[] = {'H', 'e', 'l', 'l', 'o'};

    // char str[100];
    // cout<<"Enter a string : ";
    // // cin>>str;
    // cin.get(str, 100);
    // cout<<"You Entered : "<<str;

    // string str;
    // cout<<"Enter a string : ";
    // // cin>>str;
    // getline(cin, str);
    // cout<<"You Entered : "<<str;

    string str = "Hello World, world is beautiful";
    cout<<str<<endl;
    // cout<<str.find("World")<<endl; //first occurance
    // cout<<str.rfind("World")<<endl;
    str.append(", this is added");
    cout<<str<<endl;
}
*/
#include<iostream>
using namespace std;
int getLength(char str[])
{
    int count = 0;
    for(int i=0; str[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
void reverse(char str[], int size)
{
    int s = 0;
    int e = size - 1;
    while(s<=e)
    {
        swap(str[s], str[e]);
        s++;
        e--;
    }
}
bool isPalindrome(char str[])
{
    int size = strlen(str);
    int s = 0;
    int e = size - 1;
    while(s<=e)
    {
        if(str[s] != str[e])
        {
            return false;
        }
        else
        {
            s++;
            e--;
        }
    }
    return true;
}
int main()
{
    char str[100] = "noon";
    cout<<getLength(str)<<endl;
    reverse(str, 5);
    cout<<str<<endl;
    if(isPalindrome(str))
    {
        cout<<"IS Palindrome"<<endl;
    }
    else
    {
        cout<<"Not a Palindrome"<<endl;
    }
}
