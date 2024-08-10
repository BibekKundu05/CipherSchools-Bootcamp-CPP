#include <iostream>
#include <string>
using namespace std;
class Book {
    private:
        string title;
        string author;
        int year;
    public:
        Book(string title, string author, int year) {
            this->title = title;
            this->author = author;
            this->year = year;
        }
        void displayInfo(){
            cout<<"Title: "<<title<<endl;
            cout<<"Author: "<<author<<endl;
            cout<<"Year: "<<year<<endl;
        }
};
int main(){
    string title;
    string author;
    int year;
    cout<<"Enter the title of the book: ";
    getline(cin, title);
    cout<<"Enter the author of the book: ";
    getline(cin, author);
    cout<<"Enter the year of publication: ";
    cin>>year;
    Book myBook(title, author, year);
    myBook.displayInfo();
}
