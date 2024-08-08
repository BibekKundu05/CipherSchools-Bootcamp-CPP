#include <iostream>  
#include <cstring>  
using namespace std;
int main() {  
    char a;  
    cout << "Enter a character: ";  
    cin >> a;  
    char temp = a; 
    a = tolower(a);  
    char vowels[] = {'a', 'e', 'i', 'o', 'u'};  
    bool isVowel = false;  
    for(int i=0;i<5;i++)
    {  
        if(a == vowels[i])
        {  
            isVowel = true;  
            break;  
        }  
    }  
    if(isVowel)
    {  
        cout<<temp<<" is a vowel."<<endl;  
    }
    else
    {  
        cout<<temp<<" is a consonant."<<endl;  
    }
    return 0;  
}
