#include<iostream>
using namespace std;
//stack max size
#define maxSize 10
//stack class where all the implementation of stack will be done
class MyStack{
    private:
        //stack index pointer set to -1
        int top=-1;
        //stack array where elements of stack will be store
        int data[maxSize];
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
        void push(int element)
        {
            //if stack is not full only in such case element will be pushed to stack
            if(!isFull())
            {
                //before storing the element in the index, top will be incremented and after that value will be stored in that index.
                top++;
                data[top]=element;
                //after storing the elements in index, confirmation message will be shown
                cout<< element<< " is pushed in the stack"<<endl;
            }
        }

        //function to pop or remove element from the stack
        void pop()
        {
            //if stack is  not empty only such case element will be removed from the stack.
            if(!isEmpty())
            {
                int removed_element=data[top];
                top--;
                //after removing the elements from the stack, confirmation message will be shown
                cout<< removed_element<< " is removed from the stack"<<endl;
            }
        }

        //function to print all the elements of stack from last in to first in.
        void showElement()
        {
            cout<<"The elements of the stack is: "<<endl;
            //loop will be executed from top to 0th index.
            for(int i=top;i>=0;i--)
            {
                cout<<data[i]<<endl;

            }
        }
};

int main()
{
    //creating an object ob stack class
    MyStack stk;
    //pushing or adding elements in the stack
    stk.push(10);
    stk.push(20);
    stk.push(30);
    stk.push(40);
    stk.push(50);
    stk.push(60);
    stk.push(70);
    stk.push(80);
    stk.push(90);
    stk.push(100);
    stk.push(110);
    stk.push(120);
    //printing all the elements of the stack after performing push operation
    cout<<"Printing the stack after doing push operation: "<<endl;
    stk.showElement();
    //removing elements from the stack
    stk.pop();
    stk.pop();
    stk.pop();
    stk.pop();
    stk.pop();
    stk.pop();
    stk.pop();
    stk.pop();
    stk.pop();
    stk.pop();
    stk.pop();
    stk.pop();

    //printing the elements of stack after performing pop operation
    cout<<"Printing the stack after doing pop operation: "<<endl;
    stk.showElement();

    return 0;
}
