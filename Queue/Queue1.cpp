#include <iostream>
using namespace std;
#define maxsize 5
struct Player{
    string player_name;
    string team_name;
};
class Queue{
    private:
    int front =-1;
    int rear =-1;
    Player arr[maxsize];

    public:
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
        if (rear >= (maxsize-1))
        {
            return true;
        }
        else 
        {
            return false;
        }
        
    }     
    void enqueue (Player data)
    {
        if(!isFull())
        {
            if(front == -1 && rear ==-1)
            {
                front++;
                rear++;
                arr[rear] = data;
            }
            else 
            {
                rear++;
                arr[rear] = data ;
            }
        }
        else
        {

            cout<<"Queue is full"<<endl;
        }
    }
    void dequeue ()
    {
       if (!isEmpty())
       {
       cout <<arr[front].player_name<<" is removed "<<endl;
       front++;
        }

        else{
            cout<<"is empty"<<endl;
        }
    }

    void PrintQueue()
    {
        for (int i = front; i <=rear; i++)
        {
    
            cout<<"Player name : "<<arr[i].player_name<<endl;
            cout<<"Player team : "<<arr[i].team_name<<endl;
        }

    }
};

int main()
{
    Player p1,p2,p3,p4,p5,p6;

    p1.player_name ="nasif";
    p1.team_name ="black";

    p2.player_name ="mim";
    p2.team_name ="red";

    p3.player_name ="akib";
    p3.team_name ="blue";

    p4.player_name ="nisha";
    p4.team_name ="pink";

    p5.player_name ="konok";
    p5.team_name ="white";

    p6.player_name ="iron man";
    p6.team_name ="gold";

    Player prr[5];
    prr[0]=p1;
    prr[1]=p2;
    prr[2]=p3;
    prr[3]=p4;
    prr[4]=p5;
    prr[5]=p6;

     Queue q;
    
    

    for(int i=0 ; i<=5;i++)
     {
        q.enqueue(prr[i]);
     }

     q.PrintQueue();
     q.dequeue();
     q.dequeue();
     q.dequeue();
     q.dequeue();


    return 0;

}