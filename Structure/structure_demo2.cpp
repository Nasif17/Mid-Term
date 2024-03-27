#include<iostream>
using namespace std;
struct Book
{
    string title;
    string author_name;
    float price;
    int page_no;
    string issbn;
};

Book userInput()
{
    Book b;
    string d;

    cout<<"please input the title of the book: ";
    //cin>>b.title;

    getline(cin,b.title);
    cout<<"please input the name of the author of the book: ";
    //cin>>b.author_name;
    getline(cin,b.author_name);
    cout<<"please input the price of the book: ";
    cin>>b.price;
    cout<<"please input the number of page of the book: ";
    cin>>b.page_no;
    cout<<"please input the issbn number of the book: ";
    cin>>b.issbn;
    getline(cin,d);

    cout<<endl;

    return b;
}

void printBookDetails(Book b)
{
    cout<<"The title of the book is: "<<b.title<<endl;
    cout<<"The author of the book is: "<<b.author_name<<endl;
    cout<<"The price of the book is: "<<b.price<<endl;
    cout<<"The number of page of the book is: "<<b.page_no<<endl;
    cout<<"The Issbn of the book is: "<<b.issbn<<endl;
    cout<<"---------------"<<endl;

}
int main()
{
    Book book[4];
    for(int i=0;i<4;i++)
    {
        book[i]=userInput();
    }

    for(int i=0;i<4;i++)
    {
        printBookDetails(book[i]);
    }
    return 0;
}
