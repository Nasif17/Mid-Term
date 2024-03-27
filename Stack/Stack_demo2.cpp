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

//stack max size
#define maxSize 10
//stack class where all the implementation of stack will be done
class MyStack{
    private:
        //stack index pointer set to -1
        int top=-1;
        //stack array where elements of stack will be store
        Book data[maxSize];
    public:
        //function to check whether stack is full or not
        bool isFull()
        {
            // if top is greater or equals to (stack max size-1) then, stack will be full.
            if(top>=(maxSize-1))
            {
                cout<<"Stack is full"<<endl;
                return true;
            }

            else
            {
                return false;
            }
        }

        //function to check whether stack is empty or not
        bool isEmpty()
        {
            // if top is equals to -1, stack will be empty.
            if(top==-1)
            {
                cout<<"Stack is empty"<<endl;
                return true;
            }

            else
            {
                return false;
            }
        }

        //function to push elements in the stack
        void push(Book element)
        {
            //if stack is not full only in such case element will be pushed to stack
            if(!isFull())
            {
                //before storing the element in the index, top will be incremented and after that value will be stored in that index.
                top++;
                data[top]=element;
                //after storing the element in index, confirmation message will be shown
                cout<<"Element is pushed in the stack"<<endl;
            }
        }

        //function to pop or remove element from the stack
        void pop()
        {
            //if stack is  not empty only such case element will be removed from the stack.
            if(!isEmpty())
            {
                top--;
                //after removing the element from the stack, confirmation message will be shown
                cout<<"Element is removed from the stack"<<endl;
            }
        }

        //function to print all the elements of stack from last in to first in.
        void showElement()
        {
            cout<<"The elements of the stack is: "<<endl;
            //loop will be executed from top to 0th index.
            for(int i=top;i>=0;i--)
            {
                cout<<endl;
                cout<<"----------------Book Details------------"<<endl;
                cout<<"Book Name: "<<data[i].title<<endl;
                cout<<"Author Name: "<<data[i].author_name<<endl;
                cout<<"Price: "<<data[i].price<<endl;
                cout<<"Page no: "<<data[i].page_no<<endl;
                cout<<"Issbn no: "<<data[i].issbn<<endl;
                cout<<endl;

            }
        }
};

int main()
{
    //creating an object ob stack class
    MyStack stk;
    //creating object of book type
    Book b1;
    b1.title="Java Book";
    b1.author_name="Mr. RR";
    b1.price=90.00;
    b1.page_no=30;
    b1.issbn="iujava909";

    Book b2;
    b2.title="Data Structure Book";
    b2.author_name="Mr. MM";
    b2.price=70.00;
    b2.page_no=80;
    b2.issbn="iudst909";

    //pushing or adding elements in the stack
    stk.push(b1);
    stk.push(b2);

    cout<<"Printing the stack after doing push operation: "<<endl;
    stk.showElement();

    //removing elements from the stack
    stk.pop();
    cout<<"Printing the stack after doing pop operation: "<<endl;
    stk.showElement();

    return 0;
}

