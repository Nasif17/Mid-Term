#include <iostream>
#define MaxSize 5
using namespace std;

struct Teacher
{
    int id;
    int age;
};


class  Queue {
    private:
           int front = -1;
           int rear = -1;
           Teacher Array_1[MaxSize];

    public :
    bool isEmpty()
    {
        if ((front ==-1 && rear ==-1) || (front >rear))
        {
             return true;
        }
        else {
            return false;
        }
        
    }  
    bool isFull()
    {
        if (rear >= (MaxSize-1))
        {
            return true;
        }
        else 
        {
            return false;
        }
        
    }     

    void enqueu(Teacher data)
    {
        if (!isFull())
        {
            if (rear==-1 && front ==-1)
            {
                front ++;
                rear++;
                Array_1[rear] = data;
            }
            else
            {
                rear++;
                Array_1[rear]=data;
            }
        }
        else
        {
            cout<< " Quque is full" <<endl;
        }
    }
    void dequeue()
    {
        if (!isEmpty()){
       cout <<Array_1[front].id<<" is removed "<<endl;
       front++;
        }

        else{
            cout<<"is empty"<<endl;
        }
    }
    int printQueue ()
    {
        for (int i = front; i <=rear; i++)
        {
            cout<<"Age :"<<Array_1[i].age<<endl;
            cout<<"Id : "<<Array_1[i].id<<endl;
        }
        
    }
};
int main()
{
    
    Teacher t1,t2,t3,t4;

    t1.age=20;
    t1.id=101;

    t2.age =25;
    t2.id =102;

    t3.age =30;
    t3.id =103;

    t4.age =27;
    t4.id =104;

    Teacher trr[3];
    trr[0]= t1;
    trr [1]=t2;
    trr [2]=t3;
    trr [3]=t4;
    Queue q;
    
    

    for(int i=0 ; i<4;i++)
     {
        q.enqueu(trr[i]);
     }

     q.printQueue();


    return 0;
    
}