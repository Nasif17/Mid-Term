#include <iostream>
using namespace std;
#define MaxSize 8
class MyStack{
    private:
    int top=-1;

    char data[MaxSize];

    public:
    bool isFull()
    {
        if (top>=(MaxSize-1))
        {
            cout<<"Stack is full"<<endl;
            return true;
        }
        else
        {
            return false;
        }
    }

    

    bool isEmpty()
    {
        if (top==-1)
        {
            cout<<"Stack is Empty"<<endl;
            return true;

        }
        else
        {
            return false;
        }
    }



    void push(string e)
    {
        if(!isFull())
        {
            for (int i = 0; i <e.length(); i++)
            {
                if (top+1<MaxSize)
                
                {
                    top++;
                    data [top]=e[i];
                }
                
                   
            
            
            }

        }
    }


    void pop()
    {
        
        
          if (!isEmpty())
          {
            char removed_element = data[top];
            top--;

          }
    
    }



    void showDetails()
    {
       for (int i = 0; i <= top; i++)
       {
        cout<<data[i];
       }
       cout<<endl;
       
    }

    
    
     void showReverseElement() 
    {
        cout << "The reverse elements are: " << endl;
        for (int i = top; i >= 0; i--) 
        {
            cout << data[i];
        }
        cout << endl;
    }
    

};



int main()
{
    MyStack stk;
    string s;

    cout<<"put your String :";
    cin>>s;
    stk.push(s);

    cout<<"printing the element"<<endl;

    stk.showDetails();
    stk.showReverseElement();
    stk.pop();
    stk.pop();
    stk.showDetails();
    stk.push("Nasif");
    stk.showDetails();
    stk.isEmpty();
    stk.isFull();

    return 0;

}